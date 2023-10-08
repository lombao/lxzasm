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
 
 
#ifndef __LXZASM_CODE
#define __LXZASM_CODE 1

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "defs.h"

extern int code_init();
extern int code_putbyte(const uint8_t value);
extern int code_putword(const uint16_t value);

extern int code_output(char * file);
extern int code_output_bin(char * file);
extern int code_output_hex(char * file);

extern int line_increase();
extern int line_get();
extern int line_reset();

extern int pc_init(const int value);
extern int pc_inc(const int increase);
extern int pc_get();
extern int pc_get_last();
extern int pc_reset();
extern int pc_set_limit(const int value);

extern int list_print();

#endif
