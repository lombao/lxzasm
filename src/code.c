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
#include "symbols.h"

//----------------------------------------------------------------------

int8_t ram[65535];

/* PC Program Counter */
int pc = 0;
int lastpc = 0;
int minpc = 999999;
int maxpc = 0;
int pclimit = -1;


/* lst */
int line=1;

struct {
	int line;
	int address;
	char * code;
	char opcode[256];
} listlines[MAX_NUM_ASM_LINES];


/*hex output*/
struct {
	char start;
	char bytecount[3];
	char address[5];
	char type[3];
	char data[600];
	char chksum[3];
} hexlines[MAX_NUM_ASM_LINES];


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
		ram[a]=0x0;
	}
	return TRUE;
}



int code_putbyte(const uint8_t value) {
	
char hex[3];


	ram[pc_get()] = value;
	sprintf(hex,"%02X",value);

	int k = line_get();
		
	if ( listlines[k].opcode[0] == 0x0 ) {
			listlines[k].address = pc_get();
			sprintf(hexlines[k].address,"%04X",pc_get());
			strcpy(hexlines[k].type,"00");
			hexlines[k].start = ':';
	}
	strcat(listlines[k].opcode,hex); 
	strcat(hexlines[k].data,hex);	
	sprintf(hexlines[k].bytecount,"%02X", ( (uint8_t)strlen(hexlines[k].data) / 2) );	
	
	pc_inc(1);
	return TRUE;
}	



int code_putword(const uint16_t value) {
	
char hex1[4];
char hex2[4];


	ram[pc_get()] = value & 0x00FF;
	ram[pc_get()+1] = value >> 8;
	
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
	



//---------------------------------------------------------------------
int pc_init(const int value) {
	lastpc = pc;
	pc = value;
	
	if ( minpc > value ) { minpc = value; }
	if ( maxpc < value ) { maxpc = value; }
	
	return pc;
}

int pc_inc(const int increase) {
	
	lastpc = pc;	
	pc = pc + increase;
	
	if ( minpc > pc ) { minpc = pc; }
	if ( maxpc < pc ) { maxpc = pc; }
	
	if ( pclimit > 0 ) {
		if ( maxpc > pclimit ) {
			char msgerror[500];
			sprintf(msgerror,"The PC in this line has exceeded the LIMIT set in thsi program. The LIMIT set is: %04XH",pclimit);
			generalerror(msgerror);
		}
	}
	
	return pc;
}

int pc_set_limit(const int value) {
	
	pclimit = value;
	if ( pclimit <= pc ) {
		fprintf(stderr,"::: ERROR: The Limit is set below or equal the current PC\n");
		exit(EXIT_FAILURE);
	}
	return pclimit;
	
	
}

int pc_get() {
	return pc;
}

int pc_get_last() {
	 return lastpc; 
}

int pc_reset() {
	pc = 0; 
	minpc = 99999;
	maxpc = 0;
	return TRUE;
}
//----------------------------------------------------------------------

int list_print() {
	
	int k;
	char codeline[MAX_SIZE_ASM_LINE];
	char opcode[MAX_SIZE_ASM_LINE];
	
	
	printf("\t\t       LIST \n");
	printf("=============================================================\n");
	printf("Line Address  Code                  Label           Assembler\n");
	printf("-------------------------------------------------------------\n");
	for (k=1;k<=preproc_numberlines();k++) {
		
			strcpy(codeline,preproc_origline_get(k));
			strcpy(opcode,listlines[k].opcode);
			
			if ( strlen(opcode) > 18 ) { 
				opcode[17]='.';
				opcode[18]='.';
				opcode[19]='.';
				opcode[19]=0x0;
				
			}
			
			char * label = sym_getlabel( listlines[k].address );
			
			if ( listlines[k].opcode[0] != 0x0 ) {
				if ( label == NULL ) {
					printf("%4d  %04X    %-20s                  %-s\n",k,listlines[k].address,opcode,codeline);
				} 
				else {
					printf("%4d  %04X    %-20s %-16s %-s\n",k,listlines[k].address,opcode,label,codeline);
				}
			}
	}
	
	printf("\nNumer of lines: %d\n\n",preproc_numberlines());
	
	return TRUE;
}


//----------------------------------------------------------------------
int code_output(char * file) {
	
	FILE * fo=fopen(file, "wb+"); 
	if ( fo == NULL) { 
		fprintf(stderr,"::: ERROR: I cannot open the file %s to generate the code\n",file);
		exit(EXIT_FAILURE);
	}
	
	fwrite(ram,65535,1,fo);
	fclose(fo);
	return TRUE;
}
int code_output_bin(char * file) {
		
	FILE * fo=fopen(file, "wb+"); 
	if ( fo == NULL) { 
		fprintf(stderr,"::: ERROR: I cannot open the file %s to generate the code\n",file);
		exit(EXIT_FAILURE);
	}
	
	fwrite(&ram[minpc],maxpc-minpc,1,fo);
	fclose(fo);
	return TRUE;
}


/* output in Intel HEX format https://en.wikipedia.org/wiki/Intel_HEX */
int code_output_hex(char * file) {
	
 char postline[MAX_SIZE_ASM_LINE];
 char hexchksum[3];
 char auxcode[3];
 	
	FILE * fo=fopen(file, "wa+"); 
	if ( fo == NULL) { 
		fprintf(stderr,"::: ERROR: I cannot open the file %s to generate the code\n",file);
		exit(EXIT_FAILURE);
	}
	
	for(int r=0;r<=preproc_numberlines();r++) {
		if ( hexlines[r].start != ':' ) { continue; }
		
		strcpy(postline,":");
		strcat(postline,hexlines[r].bytecount);
		strcat(postline,hexlines[r].address);
		strcat(postline,hexlines[r].type);
		strcat(postline,hexlines[r].data);
		
		unsigned int chksum = 0;
		/* checksum, ignoring the initial : start byte */
		for(int a=1;a<strlen(postline);a=a+2) {
			strncpy(auxcode,&postline[a],2);
			auxcode[2]=0x0;
			chksum += strtol(auxcode,NULL,16);
		}		
		sprintf(hexchksum,"%02X", (uint8_t)( ((~chksum)+1)&0xFF ) );
		hexchksum[2]=0x0;
		strcat(postline,hexchksum);
		strcat(postline,"\n");	
		fputs(postline,fo);
	}

    /* end of file */
    fputs(":00000001FF\n",fo);
    
	fclose(fo);
	return TRUE;
}
