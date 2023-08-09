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




#include <stdio.h>

#include "code.h"
#include "parseerrors.h"
#include "preproc.h"

//----------------------------------------------------------------------

int8_t rom[65535];

/* PC Program Counter */
int pc = 0;
int lastpc = 0;

/* lst */
struct {
	int line;
	int address;
	char * code;
	char opcode[256];
} listlines[MAX_NUM_ASM_LINES];
int numlistlines=0;

/* line */
int line=1;


//*********************************************************************/
//*********************************************************************/
int line_increase() {
	line++;
	return line;
}

int line_get() {
	return line;
}

int line_reset() {
	line = 1;
	return 1;
}	


//*********************************************************************/
int code_init() {

	int a=0;
	for(a=0;a<65535;a++) {
		rom[a]=0x0;
	}
	return TRUE;
}



int code_putbyte(const uint8_t value) {
	
char hex[3];

	rom[pc_get()] = value;
	sprintf(hex,"%02X",value);

	int k = line_get();
		
	if ( listlines[k].opcode[0] == 0x0 ) {
			listlines[k].address = pc_get();
	}
	strcat(listlines[k].opcode,hex); 	
	
	
	pc_inc(1);
	return TRUE;
}	



int code_putword(const uint16_t value) {
	
char hex1[4];
char hex2[4];

	rom[pc_get()] = value & 0x00FF;
	rom[pc_get()+1] = value >> 8;
	
	sprintf(hex1,"%02X",value & 0x00FF);
	sprintf(hex2,"%02X",value >> 8);

	int k = line_get();

	if ( listlines[k].opcode[0] == 0x0 ) {
			listlines[k].address = pc_get();			
	}
	strcat(listlines[k].opcode,hex1);
	strcat(listlines[k].opcode,hex2); 	
	
	pc_inc(2);
	return TRUE;
}	
	

int code_output(char * file) {
	
	FILE * fo=fopen(file, "wb+"); 
	if ( fo == NULL) { 
		fprintf(stderr,"::: ERROR: I cannot open the file %s to generate the code\n",file);
		exit(EXIT_FAILURE);
	}
	
	fwrite(rom,65535,1,fo);
	fclose(fo);
	return TRUE;
}

//---------------------------------------------------------------------
int pc_init(const int value) {
	lastpc = pc;
	pc = value;
	return pc;
}

int pc_inc(const int increase) {
	lastpc = pc;	
	pc = pc + increase;
	return pc;
}

int pc_get() {
	return pc;
}

int pc_get_last() {
	 return lastpc; 
}

//----------------------------------------------------------------------

int list_print() {
	
	int k;
	char codeline[MAX_SIZE_ASM_LINE];
	
	printf("\t\t       LIST \n");
	printf("================================================================\n");
	printf("Line Address  Code                  Assembler\n");
	for (k=1;k<=preproc_numberlines();k++) {
			strcpy(codeline,preproc_origline_get(k));
			
			if ( listlines[k].opcode[0] != 0x0 ) {
				printf("%4d  %04X    %-20s => %-s\n",k,listlines[k].address,listlines[k].opcode,codeline);
			}
	}
	
	printf("\nNumer of lines: %d\n\n",preproc_numberlines());
	
	return TRUE;
}
