# LXZASM

A yet another simple Z80 assembler
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

## Bugs, suggestions and comments
Please , send them to me: cesar dot lombao at gmail dot com .

## How to use it ?
```
$ ./lxzasm -h
LXZ Assembler. Version 0.1

Usage: lxzasm [-v] [ -h] [ -l]  inputfile 
	v:  Show Version
	h:  Show Help ( this help )
	d:  Dump all Labels
	l:  Generate List report
```


## Sources of Information
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


## SYNTAX

### Hexadecimal values
```
   LD HL, &4000 
   LD HL, #4000
   LD HL, 0x4000
   LD HL, 4000H
```

### Binary
```
   LD A,00010000b
```


## Directives and Pseudo instructions
Please in the folder doc a more detailed description, this is just a list of
the existent options
* ALIGN
* DEFB ( DW )
* DEFM ( DM )
* DEFW ( DW )
* EQU
* ORG
* INCLUDEBIN ( INCBIN )



## TODO
* Create a switch to control the generation of undocumented instructions.
* Implement the $ variable pointer
* Allow to use the + - signs in numbers
* include file
* Allow to compile more than one file at a time
* macros
