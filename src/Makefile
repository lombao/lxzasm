VERSION=0.16

CFLAGS = -g  -Wall -Wextra -O2 -DLXZASMVERSION="\"$(VERSION)\""
YFLAGS = -d -Wcounterexamples

LEX  = flex
YACC = bison 
CC = gcc

all:	lxzasm
lxzasm:	main.o preproc.o grammar-firstpass.tab.o grammar-secondpass.tab.o lex.firstpass.o lex.secondpass.o symbols.o parseerrors.o code.o 
		$(CC) -o $@ -Wall -O3 $^ 

preproc.o: preproc.c preproc.h
		$(CC) -c $^ -O3 -Wall
		
main.o: main.c defs.h 
		$(CC) $(CFLAGS) -c $^ -Wall 

symbols.o: symbols.c defs.h symbols.h
		$(CC) -c $^ -Wall 
		
parseerrors.o: parseerrors.c defs.h parseerrors.h
		$(CC) -c $^ -Wall 
		
code.o: code.c code.h defs.h
		$(CC) -c $^ -Wall 

lex.firstpass.c:	firstpasslex.l grammar-firstpass.tab.h
			$(LEX) --outfile=lex.firstpass.c firstpasslex.l
			
lex.secondpass.c:	secondpasslex.l grammar-secondpass.tab.h
			$(LEX) --outfile=lex.secondpass.c secondpasslex.l
	
lex.firstpass.o:							lex.firstpass.c  grammar-firstpass.tab.h
lex.firstpass.o grammar-firstpass.tab.o :	symbols.h

lex.secondpass.o:							lex.secondpass.c  grammar-secondpass.tab.h
lex.secondpass.o grammar-secondpass.tab.o :	symbols.h

  
grammar-firstpass.tab.c  grammar-firstpass.tab.h: grammar-firstpass.y defs.h
	$(YACC) $(YFLAGS) -Dapi.prefix={firstpass} grammar-firstpass.y 


grammar-secondpass.tab.c   grammar-secondpass.tab.h: grammar-secondpass.y defs.h
	$(YACC) $(YFLAGS) -Dapi.prefix={secondpass} grammar-secondpass.y 


clean:
	rm -fr *.o
	rm -fr lex.yy.c
	rm -fr lex.firstpass.c
	rm -fr grammar-firstpass.tab.h
	rm -fr grammar-firstpass.tab.c
	rm -fr lex.secondpass.c
	rm -fr grammar-secondpass.tab.h
	rm -fr grammar-secondpass.tab.c
	rm -fr *.gch
	rm -fr lxzasm
