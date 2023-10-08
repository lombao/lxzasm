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
#include "parseerrors.h"
#include "symbols.h"
#include "preproc.h"

#include "macro.h"


//----------------------------------------------------------------------
/* Data structs */
struct entrymacro {
	     char macro[MAX_SIZE_NAME_MACRO];
	     char * params[MAX_MACRO_NUM_PARAMS];
	     int nparams;
		 char * lines[MAX_NUMBER_LINES_MACRO];
	     int nlines;
} TableMacros[MAX_NUM_MACROS];
int nmacros=0;
int flag_macro=FALSE;


//*********************************************************************/



void macro_addmacro_v1(const char * line) {

 char name[MAX_SIZE_NAME_MACRO];
 char params[MAX_SIZE_NAME_MACRO];
 
	if ( nmacros >= MAX_NUM_MACROS ) {
		fprintf(stderr,"::: ERROR: Too many macros, max allowed: %d\n",MAX_NUM_MACROS);
		exit(EXIT_FAILURE);
	}
	
	int a=0; while(line[a]!=' ') a++; 
	if ( a+1 >= MAX_SIZE_NAME_MACRO ) { 
		fprintf(stderr,"::: ERROR: MAcro Name too long. Max: %d \n",MAX_SIZE_NAME_MACRO);
		exit(EXIT_FAILURE);
	}
	strncpy(name,line,MAX_SIZE_NAME_MACRO);
	name[a] = 0x0;
	if ( name[a-1]==':' ) name[a-1]=0x0;
	
	if ( sym_lookupsymbol(name) == TRUE ) { 
		fprintf(stderr,"::: ERROR: The name of this macro: %s is already in use as a symbol, variable or constant",name);
		exit(EXIT_FAILURE);
	}
	
	strcpy(TableMacros[nmacros].macro,name);
	TableMacros[nmacros].nparams = 1;
	
	while(line[a]==' ' || line[a]=='\t') a++; /* skip spaces */
	while(line[a]!=' ' && line[a]!='\t') a++; /* skip word MACRO */
	while(line[a]==' ' || line[a]=='\t') a++; /* skip spaces again */
	
	strcpy(params,&line[a]);
	aux_string_compress(params);
	
	int kp = 0;
	char * token = strtok(params,",");
	while (token) {
		TableMacros[nmacros].params[ kp++ ] = strdup(token); 
		token = strtok(NULL, ",");
	}
	TableMacros[nmacros].nparams = kp;
	flag_macro = TRUE;
	
	
}

/* Add one line to the current Macro */
void macro_addline(const char * line) {
	if ( flag_macro != TRUE ) { 
		fprintf(stderr,"::: INTERNAL ERROR: Trying to add a line to a Macro but Macro status has not been defined\n");
		exit(EXIT_FAILURE);
	}
	
	if ( TableMacros[nmacros].nlines >= MAX_NUMBER_LINES_MACRO ) {
		fprintf(stderr,"::: ERROR: Number of lines for Macro: %s exceeds the max allowed: %d\n",TableMacros[nmacros].macro,MAX_NUMBER_LINES_MACRO);
		exit(EXIT_FAILURE);
	}
	
	TableMacros[nmacros].lines[ TableMacros[nmacros].nlines++   ] = strdup(line); 
}


/* The macro has reached the ENDM */
void macro_commit() {
	flag_macro = FALSE;
	nmacros++;
}



/* *********************************** */
int macro_detect(const char  * line) {
	
  char name[MAX_SIZE_NAME_MACRO];
	 
	int a=0; while(line[a]!=' ' && line[a]!=0x0) a++; 
	strncpy(name,line,MAX_SIZE_NAME_MACRO);
	name[a] = 0x0;
	if ( a == 0 ) return FALSE;
	
	if ( name[a-1]==':' ) name[a-1]=0x0;
	
	for ( a=0;a<nmacros;a++) {
		if ( strcmp(TableMacros[a].macro,name) == 0 ) return a;
	}
	return -1;
		
}



/**************************************************/
char * macro_getline(const int m, const int l, const char * params) {
	
	char * entryparams[MAX_MACRO_NUM_PARAMS];
	
	char output[600];
	output[0] = 0x0;
	
		if ( m >= nmacros ) {
			fprintf(stderr,"::: INTERNAL ERROR: Trying to get a line macro of a macro that does not exist: macro_getline\n");
			exit(EXIT_FAILURE);
		} 
		
		
		int ep = 0;
		char * token = strtok(params,",");
		while (token) {
			entryparams[ ep++ ] = strdup(token); 
			token = strtok(NULL, ",");
		}
		
		if ( ep != TableMacros[m].nparams ) {
			fprintf(stderr,"::: Macro ERROR: Num de input paramters:%d do not match with the number of parameters: %d defined for Macro %s\n",ep,TableMacros[m].nparams,TableMacros[m].macro);
			exit(EXIT_FAILURE);
		}
		
		
		if ( l >= TableMacros[m].nlines ) return NULL;
		
		int f = 0;
		char * line = strdup(TableMacros[m].lines[l]);
		token = strtok(line,",()+-*/~\t ");
		while (token) {
			int p = macro_lookupparameter(m,token); 
			if ( p >= 0 ) {	f=1; }
			token = strtok(NULL, ",");
		}
		
		
		
		return TableMacros[m].lines[l];
		
	
}

/******************************************/
int macro_lookupparameter(const int m,const char * param) {
	
	if ( m >= nmacros ) {
			fprintf(stderr,"::: INTERNAL ERROR: Trying to lookup parameters of a macro that does not exist: macro_lookupparameter\n");
			exit(EXIT_FAILURE);
	} 
	
	int a=0;
	for ( a=0;a<TableMacros[m].nparams;a++) {
		if ( strcmp(TableMacros[m].params[a],param) == 0 ) return a;
	}
	return -1;
}



/******************************************/
int macro_lookup(const char * name) {
	
	int a=0;
	for ( a=0;a<nmacros;a++) {
		if ( strcmp(TableMacros[a].macro,name) == 0 ) return TRUE;
	}
	return FALSE;
}
