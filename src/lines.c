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


#include "lines.h"
#include "parseerrors.h"
//----------------------------------------------------------------------

int line = 1;

char currentline[MAX_SIZE_ASM_LINE];

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

	


