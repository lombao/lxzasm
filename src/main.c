/* Copyright (c) 2017 Cesar Lombao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
 

#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include "preproc.h"
#include "symbols.h"
#include "code.h"

//----------------------------------------------------------------------
// EXTERNAL
extern int firstpassparse();
extern int secondpassparse();

extern FILE * firstpassin;
extern FILE * secondpassin;


//----------------------------------------------------------------------
/* GLOBAL VARIABLES           */
int undocumentedWarning = FALSE;
    
//----------------------------------------------------------------------
// INTERNAL
void showUsage();
void showVersion();



//----------------------------------------------------------------------
/* Print usage */
void showUsage() {
	 fprintf(stderr,"LXZ Assembler. Version %s\n\n",LXZASMVERSION); 
	 fprintf(stderr,"Usage: lxzasm [-v] [ -h] [ -l] [-t] [-u] [-o <type>] asmfile1 [asmfile2 ...] \n");
	 fprintf(stderr,"	v:  Show Version\n");
	 fprintf(stderr,"	h:  Show Help ( this help )\n");	
	 fprintf(stderr,"	t:  Dump all Labels\n");
	 fprintf(stderr,"	u:  Print Warning if using undocumented opcodes\n");	 
	 fprintf(stderr,"	l:  Generate List report\n");
	 fprintf(stderr,"	o <type>:  Type of output: \n");
	 fprintf(stderr,"            bin:	A binary file with only the bytes generated, no headers, no padding ( z80.bin )\n");
	 fprintf(stderr,"            flat:	A binary file of 64K, this is the default option  ( z80.bin )\n");
	 fprintf(stderr,"            hex:	Intel HEX Format, the output file will be named ( z80.hex )\n");
	 
	 	  
}


void showVersion() {
	fprintf(stdout,"LXZ Assembler. Version %s\n\n",LXZASMVERSION); 
}





/*** MAIN *************************/ 
int main(int argc, char *argv[]) {

	if (argc==1) { 
		fprintf(stderr, "%s: No input files\n",argv[0]);
		showUsage();
		exit(EXIT_FAILURE);
	}
  
    int opt;
    int printLabels = FALSE;
    int printList 	= FALSE;
	char * outputtype = NULL;

	while ((opt = getopt(argc, argv, "o:ultvh")) != -1) {
		switch (opt) {
			case 'v':
				showVersion();
				exit(EXIT_SUCCESS);
				break;
			case 'h': /* Show version and quit */
				showUsage();
				exit(EXIT_SUCCESS);
				break;
			case 't': 
				printLabels = TRUE;
				break;
			case 'l': 
				printList = TRUE;
				break;
			case 'u': 
				undocumentedWarning = TRUE;
				break;
			case 'o':
				outputtype = optarg;
				break;	
			default: /* '?' */
				fprintf(stderr,"Unknown option %i",opt); 
				showUsage();
				exit(EXIT_FAILURE);
		}
	}
  
    /* did we forget to provide the code file */
	if (argc==optind) { 
		fprintf(stderr, "%s: Miising the input file\n",argv[0]);
		showUsage();
		exit(EXIT_FAILURE);
	} 
  

	/* We run the preproc and return the yyin file descriptor */
	for(int i=optind;i<argc;i++) {
		secondpassin = firstpassin = preproc_proc( argv[i] );
	}
	/* Note that rewind to point to the beginning of the file before return */
	rewind(firstpassin);
//	printf("**** Preproc complete\n");
		
	/* first pass */
    firstpassparse();
    fseek(firstpassin, 0, SEEK_SET);
	
	/* reset line counter */
	line_reset();
	pc_reset();
//	printf("**** First pass complete\n");
	
    /* second pass */
    secondpassparse();
	fclose(secondpassin);
    
	
	/* print the codeptr */
//	printf("**** Second pass complete\n");
	if ( printList ==  TRUE ) {
		list_print();
	}

	if ( printLabels ==  TRUE ) {
		sym_dumplabels();
	}
    
    /* output */
    if (outputtype==NULL) {
		    code_output("z80.bin");
	}
	else {
		if (strcmp(outputtype,"bin") == 0) { code_output_bin("z80.bin"); } 
		else {
			if (strcmp(outputtype,"flat") == 0) { code_output("z80.bin"); } 	
			else {
				if (strcmp(outputtype,"hex") == 0) { code_output_hex("z80.hex"); } 	
				else {
					fprintf(stderr, "Output format: %s  it is not supported\n",outputtype);
					exit(EXIT_FAILURE);
				}
			}
		}
	}
    
} 


