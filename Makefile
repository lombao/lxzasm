CFLAGS = -g  -Wall -Wextra -O2 -DLXZ80VERSION="\"$(VERSION)\""
YFLAGS = -d

LEX  = flex
YACC = bison 
CC = gcc

SOURCES = main.c  lex.l  preproc.c preproc.h defs.h grammar-firstpass.y symbols.h symbols.c

all:	lxzasm
lxzasm:	main.o preproc.o grammar-firstpass.tab.o lex.yy.o symbols.o
		$(CC) -o $@ -Wall -O3 $^ -ly -ll

preproc.o: preproc.c preproc.h
		$(CC) -c $^ -O3 -Wall
		
main.o: main.c defs.h 
		$(CC) -c $^ -Wall 

symbols.o: symbols.c defs.h symbols.h
		$(CC) -c $^ -Wall 




lex.yy.c:	lex.l
			$(LEX) lex.l
	
lex.yy.o:							lex.yy.c  grammar-firstpass.tab.h
lex.yy.o grammar-firstpass.tab.o:	symbols.h

    
grammar-firstpass.tab.c  grammar-firstpass.tab.h: grammar-firstpass.y
	$(YACC) Dapi.prefix={firstpass} $(YFLAGS) $< -o $@
