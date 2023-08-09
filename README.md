# LXZASM

A yet another simple Z80 assembler for Linux
Written in C, using flex & bison ( lex&yacc )

## Why ?
Why not. what kind of question is this ?

## The build requirements are:
- flex and bison
- any non-prehistoric glibc & gcc  will suffice

## How to build ?
```
cd src
make
cp lxzasm <your preferred location>
```

## Tests and examples
Inside the folder tests you will find code snippets and examples
There is an script that will automatically compile them and compare 
them with the expected correct value

```
cd src
make
cd ../tests
./tests.sh
```

## BSD and other *nix 
It should run on BSD systems with minor or no changes at all but I did not test that myself.
If there is anything I can change to improve compatibility, please let me know.  


## How to use it ?
```
LXZ Assembler. Version 0.9

Usage: lxzasm [-v] [ -h] [ -l] [-t] [-u] [-o <type>] asmfile1 [asmfile2 ...] 
	v:  Show Version
	h:  Show Help ( this help )
	t:  Dump all Labels
	u:  Print Warning if using undocumented opcodes
	l:  Generate List report
	o <type>:  Type of output: 
            bin:  	A binary file with only the bytes generated, no headers, no padding
            flat:   A binary file of 64K, this is the default option
            hex:	HEX output format, the file will be named z80.hex

```

### The basic compilation
The simplest compilation would be passing just an assembler file like this:
```
lxzasm test1.asm
```
This will generate a file named "z80.bin" which is a 64Kb binary file containing the flat memory with the compiled code inside

### Combining more than one file
You can compile more than one assembler file at a time, for instance, using the examples in tests folder you could
```
lxzasm test2.asm test3.asm
```
The order of compilation will be the order you provide the files, so beware if you have added an END directive in any of then because that will interrupt the compilation

### Undocumented opcodes warning
```
lxzasm -u test15.asm
```
you will get a warning line for each undocumented opcode you are using. But
it will compile it anyway.

### Output
The code generated will be in a file named "z80.bin" for hte binary formats, "z80.hex" for the HEX ascii formats, the options at this moment are
* flat: this is the default, this is a 64K direct dump
* bin: this is a bin output but only of the generated code, no padding, no headers. 
* hex: this is the Intel HEX format ( see https://en.wikipedia.org/wiki/Intel_HEX )

## SYNTAX
It tries to acoomodate most of the syntax variants, including intel syntax, for instance, it will accept both upper and lower cases
```
	LD A,B
	ld a,b
```

### Hexadecimal values
```
   LD HL, &4000 
   LD HL, #4000
   LD HL, 0x4000
   LD HL, 4000H
   LD HL, $4000
```

### Binary
```
   LD A,00010000b
   LD A,%00010000
```

### Using the $ Pointer
```
   DW $
   LD BC,$-2
```

### Strings
You can define Strings using single quote, double quote or /, the three
following are equivalent
```
	DEFM "This is a string text"
	DEFM 'This is a string text"
	DEFM /This is a string text/
```

### Chars
```
	DEFB "T"+&80
```

### Symbols
There are 3 types of symbols
* Constants: defined using EQU
* Variables: defined using DEFL
* Labels: defined using labels ( .i.e:  label1: ld a,b ) 


## Directives and Pseudo instructions
Please in the folder doc a more detailed description, this is just a list of
the existent options
* ALIGN  		: 	Align the code with next multiple address
* DEFB ( DW )
* DEFM ( DM )
* DEFW ( DW )   
* DEFL ( DL )   :   Similar to EQU , but instead a constant, is a variable
* END			:   Ends compilation
* EQU			:   Define a constant
* ORG
* INCLUDEBIN ( INCBIN )

These directives do not perform any action, but they will not trigger any error.
The reason is compatibility with code written for other compilers
* ENT

These are special variables
* $  : This contains the current Program Counter address



## Annex
### Bugs, suggestions and comments
Please , send them to me: cesar dot lombao at gmail dot com . 

### Sources of Information
This is a collection of online sources of info I've found about the Z80

* http://www.z80.info
* http://z80.info/zip/z80-documented.pdf 
* http://www.worldofspectrum.org/z88forever/dn327/z80undoc.htm  
* http://48k.ca/zmac.html
* http://www.mathematik.uni-ulm.de/users/ag/yaze-ag/
* http://www.winape.net/help/macros.html
* https://pasmo.speccy.org
* https://www.amstrad.es/doku.php?id=publicaciones:revistas:mh_amstrad_semanal:mh_amstrad_semanal_indice
* https://clrhome.org/table/
* https://worldofspectrum.net/pub/sinclair/games-info/z/Zeus.pdf  ( Zeus Assembler )
* https://worldofspectrum.org/faq/reference/z80format.htm
* https://en.wikipedia.org/wiki/Intel_HEX


### TODO list
* include file
* macros
* create an option to normalize/pretty the assembler source code
* output txz and dat
* What about (IX-d) ??? How to deal with negative offsets ? c'2 ?
* be more specific and document the max size of a label
* allow the foramt of <literal> directive , so we can accept "labels" without the semicolon
* although HEX format output has been implemented, not proper testing has been made
