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


#include "preproc.h"
#include "parseerrors.h"
//----------------------------------------------------------------------


void preproc_processline(const char * line, char * output);


//----------------------------------------------------------------------
char * origlines[MAX_SIZE_ASM_LINE];
int nlines;

//*********************************************************************/
FILE * preproc_proc(const char * file) {
	
char lineasm[MAX_SIZE_ASM_LINE];
char postline[MAX_SIZE_ASM_LINE];
	
	FILE * fi=fopen(file, "r"); 
	if ( fi == NULL) { 
		fprintf(stderr,"::: ERROR: PREPROC: I cannot read the file %s\n",file);
		exit(EXIT_FAILURE);
	}
	
	FILE * fdt = tmpfile();
	if ( fdt == NULL) { 
		fprintf(stderr,"::: ERROR: PREPROC I cannot create temporal file for preprocessing");
		exit(EXIT_FAILURE);
	}
	
	while ( fgets( lineasm ,MAX_SIZE_ASM_LINE,fi) != NULL ) {
		preproc_origline_add(lineasm);
		preproc_processline(lineasm,postline);
		fputs(postline,fdt);
	}
	
	/* Note that rewind to point to the beginning of the file before return */
	rewind(fdt);
	return fdt;
}




//----------------------------------------------------------------------
void preproc_processline(const char * line, char * output) {
	
	int a=0;
	while(line[a]==' ' || line[a]=='\t') { a++; }
	
	if (line[a]=='#' || line[a]==';') {
		output[0]='\n';
		output[1]=0x0;
		return;
	}
	
	strcpy(output,line+a);
	
	int c; int end = strlen(line)-1;
	int literalsingle = FALSE;
	int literaldouble = FALSE;
	for(c=a;c<strlen(line);c++) {
		if (line[c]==';' && literalsingle == FALSE && literaldouble == FALSE) { end=c; break; }
		if (line[c]=='"') {
			if (literaldouble==TRUE) { literaldouble=FALSE; }
			else {
				if ( literalsingle==FALSE ) {
					literaldouble=TRUE;
				}
			}
		}
		if (line[c]=='\'') {
			if (literalsingle==TRUE) { literalsingle=FALSE; }
			else {
				if ( literaldouble==FALSE ) {
					literalsingle=TRUE;
				}
			}
		}
	}
	
	output[end-a] = '\n';
	output[end-a+1] = 0x0;
	
	return;
	
}



//---------------------------------------------------------------------
void preproc_origline_add(const char * line) {
	
  char msgerror[100];
	
		if ( nlines >= MAX_NUM_ASM_LINES ) { 
			sprintf(msgerror,"The Max number of source code lines has been exceeded: %d\n",MAX_NUM_ASM_LINES);
			generalerror(msgerror);
		}
		
		origlines[nlines++] = strdup(line);	
}


char * preproc_origline_get(const int line) {
	return origlines[line-1];
}
//---------------------------------------------------------------------
