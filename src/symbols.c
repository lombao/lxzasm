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

#include "symbols.h"
#include "parseerrors.h"

//----------------------------------------------------------------------

struct symtab symbols[MAX_NUM_LABELS];
int nsymbols = 0;

//----------------------------------------------------------------------



int sym_addlabel(const char * label, const int value) {
	
 char msgerror[100];
 	
	if (nsymbols == MAX_NUM_LABELS ) {
		generalerror("Max number symbols reached");
	}
	
	 if ( sym_lookupsymbol(label) == TRUE ) {
		sprintf(msgerror,"LABEL %s name is already in use. Labels cannot be redefined",label);
		generalerror(msgerror);
	 }
	 
	 strcpy(symbols[nsymbols].literal , label );
	 symbols[nsymbols].value = value ;
	 symbols[nsymbols].type = 0;
	 
	 nsymbols++;
	 return TRUE;
}


int sym_addequ(const char * label, const int value) {
	
 char msgerror[100];
 	
	if (nsymbols == MAX_NUM_LABELS ) {
		generalerror("Max number of symbols");
	}
	
	 if ( sym_lookupsymbol(label) == TRUE ) {
		sprintf(msgerror,"EQU %s name is already in use. Constants cannot be redefined",label);
		generalerror(msgerror);
	 }
	 
	 strcpy(symbols[nsymbols].literal , label );
	 symbols[nsymbols].value = value ;
	 symbols[nsymbols].type = 1;
	 
	 nsymbols++;
	 return TRUE;
}

int sym_adddefl(const char * label, const int value) {
	
 char msgerror[100];
 	
	/* if a defl was already defined, reuse it */
	for (int a=0; a<nsymbols;a++) {
		if ( strcmp(label,symbols[a].literal) == TRUE ) {
			if ( symbols[a].type != 2 ) {
				sprintf(msgerror,"This variable name %s is already in use as a label or constant",label);
				generalerror(msgerror);
			}
			else {
				symbols[a].value = value ;
				return TRUE;
			}
		}
	}
	 
	if (nsymbols == MAX_NUM_LABELS ) {
		generalerror("Max number of symbols reached");
	}
	strcpy(symbols[nsymbols].literal , label );
	symbols[nsymbols].value = value ;
	symbols[nsymbols].type = 2;
	 
	 nsymbols++;
	 return TRUE;
}


int sym_getvalue(const char * label) {
	
	for (int a=0; a<nsymbols;a++) {
		if ( strcmp(label,symbols[a].literal) == TRUE ) {
			return symbols[a].value;
		}
	}
	return -999999;
}

char * sym_getlabel(const int value) {
	
	for (int a=0; a<nsymbols;a++) {
		if ( symbols[a].value == value && symbols[a].type == 0) {
			return symbols[a].literal;
		}
	}
	return NULL;
}

int sym_lookupsymbol( const char * label ) {
	
	for (int a=0; a<nsymbols;a++) {
		if ( strcmp(label,symbols[a].literal) == TRUE ) {
			return TRUE;
		}
	}
	return FALSE;
	
}




int sym_dumplabels( ) { 
	
	printf("             LABELS\n==================================\n");
	for (int a=0; a<nsymbols;a++) {
		printf("LABEL:%s \t\t VALUE:%04X\n",symbols[a].literal, symbols[a].value);
	}
	printf("\n");
	printf("Number of sysmbols: %d\n",nsymbols);
	return TRUE;
}
