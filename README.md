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
   LD HL, 4000h
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

### ALIGN
Align the code to the next multiple value of the parameter. For instance, if
the current PC ( program counter ) value is 9 and you use "align 2", the PC is modified to
become 10 ( the next multiple of 2 after 9 is 10 ). 

   ALIGN 10; Change the PC to next multiplie of 10 


### DEFS (DS)
Define space: It sets a number of bytes in compilation time  with an specified value, or 0 if no parameter is given.
The command can be either DEFS or DS, the following examples produce the same result, 10 consective bytes with value 0

   DS 10   ; This will set 10 consecutive bytes with value 0
   DS 10,0 ; This is the same as before
   DEFS 10,0x0 ; This sets 10 bytes witgh value 0x07
   

### DEFB (DB)
Define Byte: It sets a number of bytes with the specified values separated by comma. 
The comand can be either DEFB or DB, see some examples :

  DB 10,34,0x34 ; This sets 3 consecutive bytes with the values 10, 34 and 0x34
  DEFB 0 ; This sets one single byte with value 0, it would be synomyn to DS 1
  
### DEFM (DM)
Define Message. Sets ASCII values of a given string. The comand can be either DEFM or DM.
The following example will store in memory the ascii values of the string "This is a message".

  DM "This is a message" ; This will set one byte for each ASCII value or each letter of the message
    
### DEFW ( DW )
Define Word. This wiill declare a word ( 2 bytes ) , note LSB will be first, MSB second.
 
  DW &7800 ; Set the consecutive values: 0x00 and 0x78 ( hexadecimal ) 
		
### ORG
Origin. It sets the initial value of the PC. By default the PC is 0, with ORG you 
can define a different starting value. If exists, it must be the first code line otherwise will throw an error

	ORG &4000 ; This will set the initial PC in the hex value 0x4000

### LIMIT
It seems a memory limit, if the compilation produces code places in an address beyond that value, 
the compilation will thrown out an error

  LIMIT C000H


### INCLUDEBIN (INCBIN)
This allows you to include some binary file content into the code.

    INLCUDEBIN "image.8bit"
    

### HIGH and LOW <expression> 
Returns the Most Significate byte ( HIGH ) or the Least Significative byte ( LOW ) of a given expression. See test19.asm
for an example:

	DB HIGH LABEL1 ; this will set in memory the most significative byte of the expression LABEL1
    DB LOW LABEL1 ; 
    
### Non implemented Directorives:    			
These directives do not perform any action, but they will not trigger any syntax error either. 
The reason is compatibility with code written for other compilers, so it is a way to tell the compiler
to ignore these completely and keep compiling

	* ENT <value>
	* ASEG
	* TITLE <string>

### The special PC Pointer $ 
This this the PC counter, you can use it to show the current PC value, see test13.asm for one example of use

	LD HL,$



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



