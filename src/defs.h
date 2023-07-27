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
 
 
#ifndef __LXZASM_DEFS
#define __LXZASM_DEFS 1 

#include <stdlib.h>
#include <string.h>
 
/* General definitions */
  
/* This one define the maximun size of a file name */
#define MAX_SIZE_FILE_NAME 100

/* Max size of an asm line */ 
#define MAX_SIZE_ASM_LINE 300
#define MAX_NUM_ASM_LINES 4000

/* Max size of addressable memory */
#define MAX_SIZE_RAM 65535


/* This is the max size of a literal ( variable or other label ) */
#define MAX_SIZE_LITERAL 128

/* This is the max num of labels, variables and constants in the whole program */
#define MAX_NUM_LABELS 500



/* */
#define FALSE 1
#define TRUE 0


#endif
