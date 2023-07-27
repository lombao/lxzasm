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
#include "lines.h"
#include "code.h"

//----------------------------------------------------------------------
// EXTERNAL
extern int firstpassparse();
extern int secondpassparse();

extern FILE * firstpassin;
extern FILE * secondpassin;


//----------------------------------------------------------------------
/* GLOBAL VARIABLES           */

//----------------------------------------------------------------------
// INTERNAL
void showUsage();
void showVersion();



//----------------------------------------------------------------------
/* Print usage */
void showUsage() {
	 fprintf(stderr,"LXZ Assembler. Version %s\n\n",LXZASMVERSION); 
	 fprintf(stderr,"Usage: lxzasm [-v] [ -h] [ -l]  inputfile \n");
	 fprintf(stderr,"	v:  Show Version\n");
	 fprintf(stderr,"	h:  Show Help ( this help )\n");	
	 fprintf(stderr,"	l:  Dump all Labels\n");	
	  
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
    int dumpLabels = FALSE;
	while ((opt = getopt(argc, argv, "o:lvh")) != -1) {
		switch (opt) {
			case 'v':
				showVersion();
				exit(EXIT_SUCCESS);
				break;
			case 'h': /* Show version and quit */
				showUsage();
				exit(EXIT_SUCCESS);
				break;
			case 'l': 
				dumpLabels = TRUE;
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
	secondpassin = firstpassin = preproc_proc( argv[optind] );
//	printf("**** Preproc complete\n");
		
	/* first pass */
    firstpassparse();
    fseek(firstpassin, 0, SEEK_SET);
	
	/* reset line counter */
	line_reset();
	pc_init(0);
//	printf("**** First pass complete\n");
	
    /* second pass */
    secondpassparse();
	fclose(secondpassin);
    
	
	/* print the codeptr */
//	printf("**** Second pass complete\n");
	if ( dumpLabels ==  TRUE ) {
		showVersion();
		sym_dumplabels();
	}
    
    /* */
    code_output("output.rom");
    
    
} 


