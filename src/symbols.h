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
 
 
#ifndef __HEADER_SYMBOLS
#define __HEADER_SYMBOLS 1 


#include <stdint.h>
#include "defs.h"

struct symtab {
  uint16_t 		value;
  char 			literal[MAX_SIZE_LITERAL];
};

//------------------------------------------

extern int sym_lookuplabel( const char * label );
extern int sym_addlabel(const char * label, const int value);
extern int sym_dumplabels( );
extern int sym_getvalue(const char * label);



#endif
