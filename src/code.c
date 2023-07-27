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



#include "code.h"
#include "parseerrors.h"

//----------------------------------------------------------------------

int8_t rom[65535];

/* PC Program Counter */
int pc = 0;
//*********************************************************************/
int code_init() {

	int a=0;
	for(a=0;a<65535;a++) {
		rom[a]=0x0;
	}
	return TRUE;
}



int code_putbyte(const int value) {
	

	if ( value > 0xFF ) { 
		generalerror("Internal Error: The opcode value exceeds the 8 bits range");
	}
	
	rom[pc_get()] = value;
	pc_inc(1);
	return TRUE;
}	



int code_putword(const int value) {
	

	if ( value > 0xFFFF ) { 
		generalerror("Internal Error: The word value exceeds the 16 bits range");
	}
	
	rom[pc_get()] = value & 0x00FF;
	rom[pc_get()+1] = value >> 8;
	
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
	pc = value;
	return pc;
}

int pc_inc(const int increase) {
	pc = pc + increase;
	return pc;
}

int pc_get() {
	return pc;
}

