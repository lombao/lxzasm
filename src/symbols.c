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
		generalerror("Max number of labels and literals reached");
	}
	
	 if ( sym_lookuplabel(label) == TRUE ) {
		sprintf(msgerror,"Label %s already defined",label);
		generalerror(msgerror);
	 }
	 
	 strcpy(symbols[nsymbols].literal , label );
	 symbols[nsymbols].value = value ;
	 
	 nsymbols++;
	 return TRUE;
}

int sym_getvalue(const char * label) {
	
	for (int a=0; a<nsymbols;a++) {
		if ( strncmp(label,symbols[a].literal,strlen(label)) == TRUE ) {
			return symbols[a].value;
		}
	}
	return -999999;
}

int sym_lookuplabel( const char * label ) {
	
	for (int a=0; a<nsymbols;a++) {
		if ( strncmp(label,symbols[a].literal,strlen(label)) == TRUE ) {
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
	return TRUE;
}
