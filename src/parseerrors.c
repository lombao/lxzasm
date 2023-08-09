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


#include "parseerrors.h"
#include "code.h"
#include "preproc.h"

//----------------------------------------------------------------------


void firstpasserror(const char *str)
{
	printf("** (debug) first pass\n");
	generalerror(str);
} 

void secondpasserror(const char *str)
{
	printf("** (debug) second pass\n");
	generalerror(str);
} 



void generalerror(const char *str)
{
    fprintf(stderr,":::ERROR Line number: %d\n     >%s\n      %s\n\n",line_get(),preproc_origline_get(line_get()),str);
    exit(EXIT_FAILURE);
} 



void undocumentedwarning()
{
    generalwarning("Using Undocumented Opcode");
} 


void generalwarning(const char *str)
{
    fprintf(stderr,":::WARNING Line number: %d\n     >%s\n      %s\n\n",line_get(),preproc_origline_get(line_get()),str);
} 
