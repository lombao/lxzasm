
%code requires{

#include <stdint.h>
#include "defs.h"
#include "parseerrors.h"
#include "symbols.h" 
#include "code.h"
#include "preproc.h"
   
}


/* This the stuff that the lexer returns to the parser */
%union {
  int32_t 		normal;
  char 			literal[MAX_SIZE_LITERAL];
  int8_t		byte;
  int16_t		word;
  uint8_t		array[256];
}


%code provides
{
  // Tell Flex the expected prototype of yylex.
  #define YY_DECL int secondpasslex ()
  // Declare the scanner.
  YY_DECL;

}

/* We want verbose level of errors */
%define parse.error verbose

/* Definte types of non terminals */
%type <word>   		expression expression2
%type <word>		expritem
%type <normal>     	reg8
%type <normal>		relativejump
%type <array>		listexpr

/* tokens */

%token EQU ORG ALIGN END INCBIN
%token DEFS DEFB DEFM DEFW 

%token ENTER DOLAR

%token IXH IXL IYH IYL
%token AF BC DE HL IX IY SP AFPLUS
%token A F B C D E H L I R 



%token INC DEC
%token ADC ADD SUB SBC

%token DJNZ JR RET RETN RETI RST JP CALL

%token DI EI LD
%token HALT NOP

%token XOR AND OR NEG

%token CP
%token CPI CPIR CPD CPDR

%token EX EXX

%token LDI LDIR

%token SCF
%token CCF

%token RLCA RRCA RLA RLC SLA SLL SRL RR RL RRC SRA

%token BIT SET RES

%token PUSH POP

%token COMMA

%token NZ Z NC PO PE P M

%token IN OUT INI INIR IND INDR OUTI OUTD OTIR OTDR

%token <literal> LITERAL
%token <normal> INTEGER
%token <literal> STRING

%token PARLEFT PARRIGHT
%token OPADD OPSUB OPMUL OPDIV


%%
    program:  	lines    	  			{  	}
    ;
    lines:  line         {  line_increase(); }
		|	lines line   {  line_increase(); }
	;	
    line: instruction ENTER				{ }
		|	directive ENTER				{ }
		|   ENTER						{ }

	;
	directive: 		END					{ return 0;}
			|	DEFS	expression						{ for(int a=0;a<$2;a++) { code_putbyte(0x00); }  }
			|	DEFS	expression COMMA expression		{ for(int a=0;a<$2;a++) { code_putbyte($4); }  }
			|   DEFM	STRING							{ for(int a=0;a<(int)strlen($2);a++) {code_putbyte($2[a]); } }
			|	DEFW	expression						{ code_putword($2); }
			|   DEFB	listexpr						{ 
															
															for(int a=1;a<=$2[0];a++) {
																code_putbyte($2[a]);
															
															}
									
														}
			|   LITERAL EQU expression					{ /* done in first pass */ }
			|   EQU expression							{ /* done in first pass most likely is LABEL EQU expression */ }
			|  	ORG INTEGER								{ pc_init($2);	}
			|	INCBIN	STRING							{ 
																uint8_t incbin[65535]; 
																int k = preproc_include_bin($2,incbin);
																for(int a=0;a<k;a++) {
																	code_putbyte(incbin[a]);
																}
														 }
			|   ALIGN   expression	{ 
										int pc = pc_get();
										int k = ((( pc / $2)+1)*$2); 
										for  (int a = pc; a < k; a++) { 
											pc_inc(1); 
										} 
									}
	;
	instruction: NOP 					{ code_putbyte( 0x00 ); } 
				| DI 					{ code_putbyte( 0xF3 ); } 
				| EI 					{ code_putbyte( 0xFB ); } 
				| HALT					{ code_putbyte( 0x76 ); }
				| RLCA					{ code_putbyte( 0x07 ); }
				| RRCA					{ code_putbyte( 0x0F ); }
				| RLA 					{ code_putbyte( 0x17 ); }
				| CCF 					{ code_putbyte( 0x3F ); }
				| CPIR					{ code_putbyte( 0xED );  code_putbyte( 0xB1 ); }
				| CPI					{ code_putbyte( 0xED );  code_putbyte( 0xA1 ); }
				| CPDR					{ code_putbyte( 0xED );  code_putbyte( 0xB9 ); }
				| CPD					{ code_putbyte( 0xED );  code_putbyte( 0xA9 ); }
				| RETN					{ code_putbyte( 0xED );  code_putbyte( 0x45 ); }
				| RETI					{ code_putbyte( 0xED );  code_putbyte( 0x4D ); }
				| EXX					{ code_putbyte( 0xD9 ); }
				| INI					{ code_putbyte( 0xED );  code_putbyte( 0xA2 ); }
				| INIR					{ code_putbyte( 0xED );  code_putbyte( 0xB2 ); }
				| IND					{ code_putbyte( 0xED );  code_putbyte( 0xAA ); }
				| INDR					{ code_putbyte( 0xED );  code_putbyte( 0xBA ); }
				| OUTI					{ code_putbyte( 0xED );  code_putbyte( 0xA3 ); }
				| OTIR					{ code_putbyte( 0xED );  code_putbyte( 0xB3 ); }
				| OUTD					{ code_putbyte( 0xED );  code_putbyte( 0xAB ); }
				| OTDR					{ code_putbyte( 0xED );  code_putbyte( 0xBB ); }	
				| SCF 					{ code_putbyte( 0x37 ); }
				| LDI					{ code_putbyte( 0xED );  code_putbyte( 0xA0 ); }
				| LDIR					{ code_putbyte( 0xED );  code_putbyte( 0xB0 ); }		
				| NEG					{ code_putbyte( 0xED );  code_putbyte( 0x44 ); }			
				| LD  ldcommand			{ }
				| AND andcommand		{ }
				| XOR xorcommand		{ }
				| OR orcommand			{ }
				| CP cpcommand			{ }
				| INC inccommand		{ }
				| DEC deccommand		{ }
				| ADC adccommand		{ }
				| ADD addcommand		{ }
				| SUB subcommand		{ }	
				| SBC sbccommand		{ }
				| DJNZ djnzcommand		{ }
				| JR jrcommand			{ }
				| JP jpcommand			{ }
				| CALL callcommand		{ }
				| EX excommand			{ }
				| RET retcommand		{ }
				| RST rstcommand		{ }
				| PUSH pushcommand		{ }
				| POP popcommand		{ }
				| IN incommand			{ }
				| OUT outcommand		{ }
				| BIT bitcommand		{ }
				| RES rescommand		{ }
				| SET setcommand		{ }
				| SLA slacommand		{ }
				| SRA sracommand		{ }
				| SRL srlcommand		{ }
				| RL rlcommand			{ }
				| RR rrcommand			{ }
				| RRC rrccommand		{ }
				| RLC rlccommand		{ }
				| SLL sllcommand			{ }
	
	;
	rlccommand: A													{ code_putbyte( 0xCB ); code_putbyte( 0x07 ); }
			| 	B													{ code_putbyte( 0xCB ); code_putbyte( 0x00 ); }
			| 	C													{ code_putbyte( 0xCB ); code_putbyte( 0x01 ); }
			| 	D													{ code_putbyte( 0xCB ); code_putbyte( 0x02 ); }
			| 	E													{ code_putbyte( 0xCB ); code_putbyte( 0x03 ); }
			| 	H													{ code_putbyte( 0xCB ); code_putbyte( 0x04 ); }
			| 	L													{ code_putbyte( 0xCB ); code_putbyte( 0x05 ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xCB ); code_putbyte( 0x06 ); }
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x06 ); }
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x06 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x00 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x01 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x02 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x03 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x04 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x05 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x07 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x00 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x01 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x02 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x03 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x04 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x05 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x07 ); }

			
	;
	rrccommand: A													{ code_putbyte( 0xCB ); code_putbyte( 0x0F ); }
			| 	B													{ code_putbyte( 0xCB ); code_putbyte( 0x08 ); }
			| 	C													{ code_putbyte( 0xCB ); code_putbyte( 0x09 ); }
			| 	D													{ code_putbyte( 0xCB ); code_putbyte( 0x0A ); }
			| 	E													{ code_putbyte( 0xCB ); code_putbyte( 0x0B ); }
			| 	H													{ code_putbyte( 0xCB ); code_putbyte( 0x0C ); }
			| 	L													{ code_putbyte( 0xCB ); code_putbyte( 0x0D ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xCB ); code_putbyte( 0x0E ); }
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0E ); }
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0E ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x08 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x09 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0A ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0B ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0C ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0D ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0F ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x08 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x09 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0A ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0B ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0C ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0D ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x0F ); }
	;
	rrcommand: 	A													{ code_putbyte( 0xCB ); code_putbyte( 0x1F ); }
			| 	B													{ code_putbyte( 0xCB ); code_putbyte( 0x18 ); }
			| 	C													{ code_putbyte( 0xCB ); code_putbyte( 0x19 ); }
			| 	D													{ code_putbyte( 0xCB ); code_putbyte( 0x1A ); }
			| 	E													{ code_putbyte( 0xCB ); code_putbyte( 0x1B ); }
			| 	H													{ code_putbyte( 0xCB ); code_putbyte( 0x1C ); }
			| 	L													{ code_putbyte( 0xCB ); code_putbyte( 0x1D ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xCB ); code_putbyte( 0x1E ); }
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1E ); }
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1E ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x18 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x19 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1A ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1B ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1C ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1D ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1F ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x18 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x19 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1A ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1B ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1C ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1D ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x1F ); }
	;
	rlcommand: 	A													{ code_putbyte( 0xCB ); code_putbyte( 0x17 ); }
			| 	B													{ code_putbyte( 0xCB ); code_putbyte( 0x10 ); }
			| 	C													{ code_putbyte( 0xCB ); code_putbyte( 0x11 ); }
			| 	D													{ code_putbyte( 0xCB ); code_putbyte( 0x12 ); }
			| 	E													{ code_putbyte( 0xCB ); code_putbyte( 0x13 ); }
			| 	H													{ code_putbyte( 0xCB ); code_putbyte( 0x14 ); }
			| 	L													{ code_putbyte( 0xCB ); code_putbyte( 0x15 ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xCB ); code_putbyte( 0x16 ); }
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x16 ); }
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x16 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x10 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x11 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x12 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x13 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x14 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x15 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x17 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x10 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x11 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x12 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x13 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x14 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x15 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x17 ); }
	;
	sracommand: A													{ code_putbyte( 0xCB ); code_putbyte( 0x2F ); }
			| 	B													{ code_putbyte( 0xCB ); code_putbyte( 0x28 ); }
			| 	C													{ code_putbyte( 0xCB ); code_putbyte( 0x29 ); }
			| 	D													{ code_putbyte( 0xCB ); code_putbyte( 0x2A ); }
			| 	E													{ code_putbyte( 0xCB ); code_putbyte( 0x2B ); }
			| 	H													{ code_putbyte( 0xCB ); code_putbyte( 0x2C ); }
			| 	L													{ code_putbyte( 0xCB ); code_putbyte( 0x2D ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xCB ); code_putbyte( 0x2E ); }
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2E ); }
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2E ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x28 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x29 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2A ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2B ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2C ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2D ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2F ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x28 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x29 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2A ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2B ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2C ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2D ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x2F ); }
	;
	slacommand: A													{ code_putbyte( 0xCB ); code_putbyte( 0x27 ); }
			| 	B													{ code_putbyte( 0xCB ); code_putbyte( 0x20 ); }
			| 	C													{ code_putbyte( 0xCB ); code_putbyte( 0x21 ); }
			| 	D													{ code_putbyte( 0xCB ); code_putbyte( 0x22 ); }
			| 	E													{ code_putbyte( 0xCB ); code_putbyte( 0x23 ); }
			| 	H													{ code_putbyte( 0xCB ); code_putbyte( 0x24 ); }
			| 	L													{ code_putbyte( 0xCB ); code_putbyte( 0x25 ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xCB ); code_putbyte( 0x26 ); }
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x26 ); }
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x26 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x20 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x21 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x22 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x23 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x24 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x25 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x27 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x20 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x21 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x22 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x23 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x24 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x25 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x27 ); }
			
	;
	sllcommand: A													{ code_putbyte( 0xCB ); code_putbyte( 0x37 ); }
			| 	B													{ code_putbyte( 0xCB ); code_putbyte( 0x30 ); }
			| 	C													{ code_putbyte( 0xCB ); code_putbyte( 0x31 ); }
			| 	D													{ code_putbyte( 0xCB ); code_putbyte( 0x32 ); }
			| 	E													{ code_putbyte( 0xCB ); code_putbyte( 0x33 ); }
			| 	H													{ code_putbyte( 0xCB ); code_putbyte( 0x34 ); }
			| 	L													{ code_putbyte( 0xCB ); code_putbyte( 0x35 ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xCB ); code_putbyte( 0x36 ); }
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x36 ); }
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x36 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x30 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x31 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x32 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x33 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x34 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x35 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x37 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x30 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x31 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x32 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x33 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x34 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x35 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x37 ); }

	;
	srlcommand: A													{ code_putbyte( 0xCB ); code_putbyte( 0x3F ); }
			| 	B													{ code_putbyte( 0xCB ); code_putbyte( 0x38 ); }
			| 	C													{ code_putbyte( 0xCB ); code_putbyte( 0x39 ); }
			| 	D													{ code_putbyte( 0xCB ); code_putbyte( 0x3A ); }
			| 	E													{ code_putbyte( 0xCB ); code_putbyte( 0x3B ); }
			| 	H													{ code_putbyte( 0xCB ); code_putbyte( 0x3C ); }
			| 	L													{ code_putbyte( 0xCB ); code_putbyte( 0x3D ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xCB ); code_putbyte( 0x3E ); }
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3E ); }
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3E ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x38 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x39 ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3A ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3B ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3C ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3D ); }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3F ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x38 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x39 ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3A ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3B ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3C ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3D ); }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $4 ); code_putbyte( 0x3F ); }
	;
	rescommand:	INTEGER COMMA reg8							{ code_putbyte( 0xCB ); code_putbyte( ($1<<3)|$3|128  );   }
			| 	INTEGER COMMA PARLEFT HL PARRIGHT 			{ code_putbyte( 0xCB ); code_putbyte( ($1<<3)|128|4|2 ); }
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|4|2 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|4|2 ); }  	
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA B { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA C { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|1 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA D { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|2 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA E { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|3 ); } 		
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA H { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|4 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA L { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|5 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA A { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|7 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA B { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA C { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|1 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA D { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|2 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA E { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|3 ); } 		
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA H { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|4 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA L { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|5 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA A { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|7 ); } 

			
	;
	setcommand:	INTEGER COMMA reg8							{ code_putbyte( 0xCB ); code_putbyte( ($1<<3)|$3|128|64  );   }
			| 	INTEGER COMMA PARLEFT HL PARRIGHT 			{ code_putbyte( 0xCB ); code_putbyte( ($1<<3)|128|64|4|2 ); }
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|4|2 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|4|2 ); }  
			
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA B { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA C { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|1 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA D { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|2 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA E { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|3 ); } 		
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA H { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|4 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA L { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|5 ); } 
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT COMMA A { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|7 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA B { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA C { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|1 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA D { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|2 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA E { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|3 ); } 		
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA H { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|4 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA L { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|5 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT COMMA A { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|128|64|7 ); } 
	;
	bitcommand:	INTEGER COMMA reg8							{ code_putbyte( 0xCB ); code_putbyte( ($1<<3)|$3|64 ) ;}
			| 	INTEGER COMMA PARLEFT HL PARRIGHT 			{ code_putbyte( 0xCB ); code_putbyte( ($1<<3)|64|6  ); }
			| 	INTEGER COMMA PARLEFT IX OPADD expression2 PARRIGHT { code_putbyte( 0xDD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|64|6 ); } 
			| 	INTEGER COMMA PARLEFT IY OPADD expression2 PARRIGHT { code_putbyte( 0xFD ); code_putbyte( 0xCB ); code_putbyte( $6 ); code_putbyte( ($1<<3)|64|6 ); }  
	;
	incommand:	A COMMA PARLEFT expression2 PARRIGHT		{ code_putbyte( 0xDB ); code_putbyte( $4 ); }
			|	B COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x40 ); }
			|	C COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x48 ); }
			|	D COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x50 ); }
			|	E COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x58 ); }
			|	H COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x60 ); }
			|	L COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x68 ); }
			|	A COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x78 ); }	
			|	PARLEFT C PARRIGHT							{  code_putbyte( 0xED ); code_putbyte( 0x70 ); }
		
	;
	outcommand:	A COMMA PARLEFT expression2 PARRIGHT		{ code_putbyte( 0xDB ); code_putbyte( $4 ); }
			|	B COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x40 ); }
			|	C COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x48 ); }
			|	D COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x50 ); }
			|	E COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x58 ); }
			|	H COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x60 ); }
			|	L COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x68 ); }
			|	A COMMA PARLEFT C PARRIGHT					{  code_putbyte( 0xED ); code_putbyte( 0x78 ); }	
			|	PARLEFT C PARRIGHT							{  code_putbyte( 0xED ); code_putbyte( 0x70 ); }
			|   PARLEFT expression2 PARRIGHT COMMA A		{  code_putbyte( 0xD3 ); code_putbyte( $2 ); }
	;
	ldcommand:	A COMMA A											{ code_putbyte( 0x7F ); }
			|	A COMMA B											{ code_putbyte( 0x78 ); }
			|	A COMMA C											{ code_putbyte( 0x79 ); }	
			|	A COMMA D											{ code_putbyte( 0x7A ); }
			|	A COMMA E											{ code_putbyte( 0x7B ); }	
			|	A COMMA H											{ code_putbyte( 0x7C ); }
			|	A COMMA L											{ code_putbyte( 0x7D ); }	
			|   A COMMA expression2									{ code_putbyte( 0x3E ); code_putbyte( $3 );}	
			|	A COMMA IXH											{ code_putbyte( 0xDD );  code_putbyte( 0x7C );  }	
			|	A COMMA IXL											{ code_putbyte( 0xDD );  code_putbyte( 0x7D );  }	
			|	A COMMA IYH											{ code_putbyte( 0xFD );  code_putbyte( 0x7C );  }	
			|	A COMMA IYL											{ code_putbyte( 0xFD );  code_putbyte( 0x7D );  }	
			|	A COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD );  code_putbyte( 0x7E ); code_putbyte($6); }	
			|	A COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD );  code_putbyte( 0x7E ); code_putbyte($6); }	
			|	A COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x7E ); }	
			|	A COMMA PARLEFT BC PARRIGHT							{ code_putbyte( 0x0A ); }	
			|	A COMMA PARLEFT DE PARRIGHT							{ code_putbyte( 0x1A ); }	
			|	A COMMA PARLEFT expression2 PARRIGHT				{ code_putbyte( 0x3A ); code_putword( $4 ); }	
			|	B COMMA A											{ code_putbyte( 0x47 ); }
			|	B COMMA B											{ code_putbyte( 0x40 ); }
			|	B COMMA C											{ code_putbyte( 0x41 ); }	
			|	B COMMA D											{ code_putbyte( 0x42 ); }
			|	B COMMA E											{ code_putbyte( 0x43 ); }	
			|	B COMMA H											{ code_putbyte( 0x44 ); }
			|	B COMMA L											{ code_putbyte( 0x45 ); }	
			|   B COMMA expression2									{ code_putbyte( 0x06 );  code_putbyte( $3 );}	
			|	B COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x46 ); }	
			|	B COMMA IXH											{ code_putbyte( 0xDD );  code_putbyte( 0x44 );  }	
			|	B COMMA IXL											{ code_putbyte( 0xDD );  code_putbyte( 0x45 );  }	
			|	B COMMA IYH											{ code_putbyte( 0xFD );  code_putbyte( 0x44 );  }	
			|	B COMMA IYL											{ code_putbyte( 0xFD );  code_putbyte( 0x45 );  }	
			|	B COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD );  code_putbyte( 0x46 ); code_putbyte($6); }	
			|	B COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD );  code_putbyte( 0x46 ); code_putbyte($6); }	
			|	C COMMA A											{ code_putbyte( 0x4F ); }
			|	C COMMA B											{ code_putbyte( 0x48 ); }
			|	C COMMA C											{ code_putbyte( 0x49 ); }	
			|	C COMMA D											{ code_putbyte( 0x4A ); }
			|	C COMMA E											{ code_putbyte( 0x4B ); }	
			|	C COMMA H											{ code_putbyte( 0x4C ); }
			|	C COMMA L											{ code_putbyte( 0x4D ); }	
			|   C COMMA expression2									{ code_putbyte( 0x0E );  code_putbyte( $3 );}	
			|	C COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x4E ); }	
			|	C COMMA IXH											{ code_putbyte( 0xDD );  code_putbyte( 0x4C );  }	
			|	C COMMA IXL											{ code_putbyte( 0xDD );  code_putbyte( 0x4D );  }	
			|	C COMMA IYH											{ code_putbyte( 0xFD );  code_putbyte( 0x4C );  }	
			|	C COMMA IYL											{ code_putbyte( 0xFD );  code_putbyte( 0x4D );  }	
			|	C COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD );  code_putbyte( 0x4E ); code_putbyte($6); }	
			|	C COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD );  code_putbyte( 0x4E ); code_putbyte($6); }			
			|	D COMMA A											{ code_putbyte( 0x57 ); }
			|	D COMMA B											{ code_putbyte( 0x50 ); }
			|	D COMMA C											{ code_putbyte( 0x51 ); }	
			|	D COMMA D											{ code_putbyte( 0x52 ); }
			|	D COMMA E											{ code_putbyte( 0x53 ); }	
			|	D COMMA H											{ code_putbyte( 0x54 ); }
			|	D COMMA L											{ code_putbyte( 0x55 ); }	
			|   D COMMA expression2									{ code_putbyte( 0x16 );  code_putbyte( $3 );}	
			|	D COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x56 ); }	
			|	D COMMA IXH											{ code_putbyte( 0xDD );  code_putbyte( 0x54 );  }	
			|	D COMMA IXL											{ code_putbyte( 0xDD );  code_putbyte( 0x55 );  }	
			|	D COMMA IYH											{ code_putbyte( 0xFD );  code_putbyte( 0x54 );  }	
			|	D COMMA IYL											{ code_putbyte( 0xFD );  code_putbyte( 0x55 );  }	
			|	D COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD );  code_putbyte( 0x56 ); code_putbyte($6); }	
			|	D COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD );  code_putbyte( 0x56 ); code_putbyte($6); }			
			|	E COMMA A											{ code_putbyte( 0x5F ); }
			|	E COMMA B											{ code_putbyte( 0x58 ); }
			|	E COMMA C											{ code_putbyte( 0x59 ); }	
			|	E COMMA D											{ code_putbyte( 0x5A ); }
			|	E COMMA E											{ code_putbyte( 0x5B ); }	
			|	E COMMA H											{ code_putbyte( 0x5C ); }
			|	E COMMA L											{ code_putbyte( 0x5D ); }	
			|   E COMMA expression2									{ code_putbyte( 0x1E );  code_putbyte( $3 );}	
			|	E COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x5E ); }	
			|	E COMMA IXH											{ code_putbyte( 0xDD );  code_putbyte( 0x5C );  }	
			|	E COMMA IXL											{ code_putbyte( 0xDD );  code_putbyte( 0x5D );  }	
			|	E COMMA IYH											{ code_putbyte( 0xFD );  code_putbyte( 0x5C );  }	
			|	E COMMA IYL											{ code_putbyte( 0xFD );  code_putbyte( 0x5D );  }	
			|	E COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD );  code_putbyte( 0x5E ); code_putbyte($6); }	
			|	E COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD );  code_putbyte( 0x5E ); code_putbyte($6); }	
			|	H COMMA A											{ code_putbyte( 0x67 ); }
			|	H COMMA B											{ code_putbyte( 0x60 ); }
			|	H COMMA C											{ code_putbyte( 0x61 ); }	
			|	H COMMA D											{ code_putbyte( 0x62 ); }
			|	H COMMA E											{ code_putbyte( 0x63 ); }	
			|	H COMMA H											{ code_putbyte( 0x64 ); }
			|	H COMMA L											{ code_putbyte( 0x65 ); }	
			|   H COMMA expression2									{ code_putbyte( 0x26 );  code_putbyte( $3 );}	
			|	H COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x66 ); }	
			|	H COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD );  code_putbyte( 0x66 ); code_putbyte($6); }	
			|	H COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD );  code_putbyte( 0x66 ); code_putbyte($6); }		
			|	L COMMA A											{ code_putbyte( 0x6F ); }
			|	L COMMA B											{ code_putbyte( 0x68 ); }
			|	L COMMA C											{ code_putbyte( 0x69 ); }	
			|	L COMMA D											{ code_putbyte( 0x6A ); }
			|	L COMMA E											{ code_putbyte( 0x6B ); }	
			|	L COMMA H											{ code_putbyte( 0x6C ); }
			|	L COMMA L											{ code_putbyte( 0x6D ); }	
			|   L COMMA expression2									{ code_putbyte( 0x2E );  code_putbyte( $3 );}	
			|	L COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x6E ); }	
			|	L COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD );  code_putbyte( 0x6E ); code_putbyte($6); }	
			|	L COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD );  code_putbyte( 0x6E ); code_putbyte($6); }																		
			|	HL COMMA expression2								{ code_putbyte( 0x21 ); code_putword( $3 ); }
			|	HL COMMA PARLEFT expression2 PARRIGHT				{ code_putbyte( 0x2A ); code_putword( $4 ); }
			|	BC COMMA expression2								{ code_putbyte( 0x01 ); code_putword( $3 ); }
			|	BC COMMA PARLEFT expression2 PARRIGHT				{ code_putbyte( 0xED ); code_putbyte( 0x4B ); code_putword( $4 ); }
			|	DE COMMA expression2								{ code_putbyte( 0x11 ); code_putword( $3 ); }			
			|	DE COMMA PARLEFT expression2 PARRIGHT				{ code_putbyte( 0xED ); code_putbyte( 0x5B ); code_putword( $4 ); }
			|	SP COMMA expression2								{ code_putbyte( 0x31 ); code_putword( $3 ); }			
			|	SP COMMA PARLEFT expression2 PARRIGHT				{ code_putbyte( 0xED ); code_putbyte( 0x7B ); code_putword( $4 ); }
			|	IX COMMA expression2								{ code_putbyte( 0xDD ); code_putbyte( 0x21 ); code_putword( $3 ); }			
			|	IX COMMA PARLEFT expression2 PARRIGHT				{ code_putbyte( 0xDD ); code_putbyte( 0x2A ); code_putword( $4 ); }
			|	IY COMMA expression2								{ code_putbyte( 0xFD ); code_putbyte( 0x21 ); code_putword( $3 ); }			
			|	IY COMMA PARLEFT expression2 PARRIGHT				{ code_putbyte( 0xFD ); code_putbyte( 0x2A ); code_putword( $4 ); }
			|	PARLEFT HL PARRIGHT COMMA expression2				{ code_putbyte( 0x36 ); code_putbyte( $5 ); }
			|	PARLEFT HL PARRIGHT COMMA B							{ code_putbyte( 0x70 ); }
			|	PARLEFT HL PARRIGHT COMMA C							{ code_putbyte( 0x71 ); }
			|	PARLEFT HL PARRIGHT COMMA D							{ code_putbyte( 0x72 ); }
			|	PARLEFT HL PARRIGHT COMMA E							{ code_putbyte( 0x73 ); }
			|	PARLEFT HL PARRIGHT COMMA H							{ code_putbyte( 0x74 ); }
			|	PARLEFT HL PARRIGHT COMMA L							{ code_putbyte( 0x75 ); }	
			|	PARLEFT HL PARRIGHT COMMA A							{ code_putbyte( 0x77 ); }	
			|	PARLEFT BC PARRIGHT COMMA A							{ code_putbyte( 0x02 ); }	
			|	PARLEFT DE PARRIGHT COMMA A							{ code_putbyte( 0x12 ); }	
			|	PARLEFT IX OPADD expression PARRIGHT COMMA expression	{ code_putbyte( 0xDD ); code_putbyte( 0x36 ); code_putbyte( $4 );  code_putbyte( $7 ); } 
			|	PARLEFT IY OPADD expression PARRIGHT COMMA expression	{ code_putbyte( 0xFD ); code_putbyte( 0x36 ); code_putbyte( $4 );  code_putbyte( $7 ); } 			
			|	PARLEFT IX OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xDD ); code_putbyte( 0x77 ); code_putbyte( $4 );  } 
			|	PARLEFT IX OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xDD ); code_putbyte( 0x70 ); code_putbyte( $4 );  } 
			|	PARLEFT IX OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xDD ); code_putbyte( 0x71 ); code_putbyte( $4 );  } 
			|	PARLEFT IX OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xDD ); code_putbyte( 0x72 ); code_putbyte( $4 );  } 
			|	PARLEFT IX OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xDD ); code_putbyte( 0x73 ); code_putbyte( $4 );  }
			|	PARLEFT IX OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xDD ); code_putbyte( 0x74 ); code_putbyte( $4 );  } 
			|	PARLEFT IX OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xDD ); code_putbyte( 0x75 ); code_putbyte( $4 );  } 
			|	PARLEFT IY OPADD expression PARRIGHT COMMA A		{ code_putbyte( 0xFD ); code_putbyte( 0x77 ); code_putbyte( $4 );  } 
			|	PARLEFT IY OPADD expression PARRIGHT COMMA B		{ code_putbyte( 0xFD ); code_putbyte( 0x70 ); code_putbyte( $4 );  } 
			|	PARLEFT IY OPADD expression PARRIGHT COMMA C		{ code_putbyte( 0xFD ); code_putbyte( 0x71 ); code_putbyte( $4 );  } 
			|	PARLEFT IY OPADD expression PARRIGHT COMMA D		{ code_putbyte( 0xFD ); code_putbyte( 0x72 ); code_putbyte( $4 );  } 
			|	PARLEFT IY OPADD expression PARRIGHT COMMA E		{ code_putbyte( 0xFD ); code_putbyte( 0x73 ); code_putbyte( $4 );  }
			|	PARLEFT IY OPADD expression PARRIGHT COMMA H		{ code_putbyte( 0xFD ); code_putbyte( 0x74 ); code_putbyte( $4 );  } 
			|	PARLEFT IY OPADD expression PARRIGHT COMMA L		{ code_putbyte( 0xFD ); code_putbyte( 0x75 ); code_putbyte( $4 );  } 
			| 	PARLEFT expression2 PARRIGHT COMMA HL				{ code_putbyte( 0x22 ); code_putword( $2 );  } 
			| 	PARLEFT expression2 PARRIGHT COMMA BC				{ code_putbyte( 0xED ); code_putbyte( 0x43 ); code_putword( $2 );  } 
			| 	PARLEFT expression2 PARRIGHT COMMA DE				{ code_putbyte( 0xED ); code_putbyte( 0x53 ); code_putword( $2 );  } 
			| 	PARLEFT expression2 PARRIGHT COMMA SP				{ code_putbyte( 0xED ); code_putbyte( 0x73 ); code_putword( $2 );  } 
			| 	PARLEFT expression2 PARRIGHT COMMA A				{ code_putbyte( 0x32 ); code_putword( $2 );  } 
			| 	PARLEFT expression2 PARRIGHT COMMA IX				{ code_putbyte( 0xDD ); code_putbyte( 0x22 ); code_putword( $2 );  } 
			| 	PARLEFT expression2 PARRIGHT COMMA IY				{ code_putbyte( 0xFD ); code_putbyte( 0x22 ); code_putword( $2 );  } 
			
			
										
	;
	andcommand:	A													{ code_putbyte( 0xA7 ); }
			| 	B													{ code_putbyte( 0xA0 ); }
			| 	C													{ code_putbyte( 0xA1 ); }
			| 	D													{ code_putbyte( 0xA2 ); }
			| 	E													{ code_putbyte( 0xA3 ); }
			| 	H													{ code_putbyte( 0xA4 ); }
			| 	L													{ code_putbyte( 0xA5 ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xA6 ); }
			|	expression2											{ code_putbyte( 0xE6 ); code_putbyte( $1 ); }
			| 	IXH													{ code_putbyte( 0xDD ); code_putbyte( 0xA4 ); }
			| 	IXL													{ code_putbyte( 0xDD ); code_putbyte( 0xA5 ); }	
			| 	IYH													{ code_putbyte( 0xFD ); code_putbyte( 0xA4 ); }
			| 	IYL													{ code_putbyte( 0xFD ); code_putbyte( 0xA5 ); }	
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xA6 ); code_putbyte( $4 );}
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xA6 ); code_putbyte( $4 );}
	;
	xorcommand: A													{ code_putbyte( 0xAF ); }
			| 	B													{ code_putbyte( 0xA8 ); }
			| 	C													{ code_putbyte( 0xA9 ); }
			| 	D													{ code_putbyte( 0xAA ); }
			| 	E													{ code_putbyte( 0xAB ); }
			| 	H													{ code_putbyte( 0xAC ); }
			| 	L													{ code_putbyte( 0xAD ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xAE ); }
			|	expression2											{ code_putbyte( 0xEE ); code_putbyte( $1 ); }
			| 	IXH													{ code_putbyte( 0xDD ); code_putbyte( 0xAC ); }
			| 	IXL													{ code_putbyte( 0xDD ); code_putbyte( 0xAD ); }	
			| 	IYH													{ code_putbyte( 0xFD ); code_putbyte( 0xAC ); }
			| 	IYL													{ code_putbyte( 0xFD ); code_putbyte( 0xAD ); }	
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xAE ); code_putbyte( $4 );}
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xAE ); code_putbyte( $4 );}
	;
	orcommand: 	A													{ code_putbyte( 0xB7 ); }
			| 	B													{ code_putbyte( 0xB0 ); }
			| 	C													{ code_putbyte( 0xB1 ); }
			| 	D													{ code_putbyte( 0xB2 ); }
			| 	E													{ code_putbyte( 0xB3 ); }
			| 	H													{ code_putbyte( 0xB4 ); }
			| 	L													{ code_putbyte( 0xB5 ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xB6 ); }
			|	expression2											{ code_putbyte( 0xF6 ); code_putbyte( $1 ); }
			| 	IXH													{ code_putbyte( 0xDD ); code_putbyte( 0xB4 ); }
			| 	IXL													{ code_putbyte( 0xDD ); code_putbyte( 0xB5 ); }	
			| 	IYH													{ code_putbyte( 0xFD ); code_putbyte( 0xB4 ); }
			| 	IYL													{ code_putbyte( 0xFD ); code_putbyte( 0xB5 ); }	
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xB6 ); code_putbyte( $4 );}
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xB6 ); code_putbyte( $4 );}
	;
	cpcommand: 	A													{ code_putbyte( 0xBF ); }
			| 	B													{ code_putbyte( 0xB8 ); }
			| 	C													{ code_putbyte( 0xB9 ); }
			| 	D													{ code_putbyte( 0xBA ); }
			| 	E													{ code_putbyte( 0xBB ); }
			| 	H													{ code_putbyte( 0xBC ); }
			| 	L													{ code_putbyte( 0xBD ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0xBE ); }
			|	expression2											{ code_putbyte( 0xFE ); code_putbyte( $1 ); }
			| 	IXH													{ code_putbyte( 0xDD ); code_putbyte( 0xBC ); }
			| 	IXL													{ code_putbyte( 0xDD ); code_putbyte( 0xBD ); }	
			| 	IYH													{ code_putbyte( 0xFD ); code_putbyte( 0xBC ); }
			| 	IYL													{ code_putbyte( 0xFD ); code_putbyte( 0xBD ); }	
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0xBE ); code_putbyte( $4 );}
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0xBE ); code_putbyte( $4 );}
	;
	inccommand:	A													{ code_putbyte( 0x3C ); }
			| 	B													{ code_putbyte( 0x04 ); }
			| 	C													{ code_putbyte( 0x0C ); }
			| 	D													{ code_putbyte( 0x14 ); }
			| 	E													{ code_putbyte( 0x1C ); }
			| 	H													{ code_putbyte( 0x24 ); }
			| 	L													{ code_putbyte( 0x2C ); }
			| 	BC													{ code_putbyte( 0x03 ); }
			| 	DE													{ code_putbyte( 0x13 ); }
			| 	HL													{ code_putbyte( 0x23 ); }
			| 	SP													{ code_putbyte( 0x33 ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0x34 ); }
			| 	IXH													{ code_putbyte( 0xDD ); code_putbyte( 0x24 ); }
			| 	IXL													{ code_putbyte( 0xDD ); code_putbyte( 0x2C ); }	
			| 	IYH													{ code_putbyte( 0xFD ); code_putbyte( 0x24 ); }
			| 	IYL													{ code_putbyte( 0xFD ); code_putbyte( 0x2C ); }	
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0x34 ); code_putbyte( $4 );}
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0x34 ); code_putbyte( $4 );}
			| 	IX													{ code_putbyte( 0xDD ); code_putbyte( 0x23 ); }
			| 	IY													{ code_putbyte( 0xFD ); code_putbyte( 0x23 ); }	
	;
	deccommand:	A													{ code_putbyte( 0x3D ); }
			| 	B													{ code_putbyte( 0x05 ); }
			| 	C													{ code_putbyte( 0x0D ); }
			| 	D													{ code_putbyte( 0x15 ); }
			| 	E													{ code_putbyte( 0x1D ); }
			| 	H													{ code_putbyte( 0x25 ); }
			| 	L													{ code_putbyte( 0x2D ); }
			| 	BC													{ code_putbyte( 0x0B ); }
			| 	DE													{ code_putbyte( 0x1B ); }
			| 	HL													{ code_putbyte( 0x2B ); }
			| 	SP													{ code_putbyte( 0x3B ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0x35 ); }
			| 	IXH													{ code_putbyte( 0xDD ); code_putbyte( 0x25 ); }
			| 	IXL													{ code_putbyte( 0xDD ); code_putbyte( 0x2D ); }	
			| 	IYH													{ code_putbyte( 0xFD ); code_putbyte( 0x25 ); }
			| 	IYL													{ code_putbyte( 0xFD ); code_putbyte( 0x2D ); }	
			| 	PARLEFT IX OPADD expression PARRIGHT 				{ code_putbyte( 0xDD ); code_putbyte( 0x35 ); code_putbyte( $4 );}
			| 	PARLEFT IY OPADD expression PARRIGHT 				{ code_putbyte( 0xFD ); code_putbyte( 0x35 ); code_putbyte( $4 );}
			| 	IX													{ code_putbyte( 0xDD ); code_putbyte( 0x2B ); }
			| 	IY													{ code_putbyte( 0xFD ); code_putbyte( 0x2B ); }	
	;
	adccommand:	A COMMA A											{ code_putbyte( 0x8F ); }
			|	A COMMA B											{ code_putbyte( 0x88 ); }
			|	A COMMA C											{ code_putbyte( 0x89 ); }
			|	A COMMA D											{ code_putbyte( 0x8A ); }
			|	A COMMA E											{ code_putbyte( 0x8B ); }
			|	A COMMA H											{ code_putbyte( 0x8C ); }
			|	A COMMA L											{ code_putbyte( 0x8D ); }
			|	A COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x8E ); }
			|   A COMMA expression2									{ code_putbyte( 0xCE ); code_putbyte( $3 );}
			|	A COMMA IXH											{ code_putbyte( 0xDD ); code_putbyte( 0x8C ); }
			|	A COMMA IXL											{ code_putbyte( 0xDD ); code_putbyte( 0x8D ); }
			|	A COMMA IYH											{ code_putbyte( 0xFD ); code_putbyte( 0x8C ); }
			|	A COMMA IYL											{ code_putbyte( 0xFD ); code_putbyte( 0x8D );  }
			|  	A COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD ); code_putbyte( 0x8E ); code_putbyte( $6 );}
			|  	A COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD ); code_putbyte( 0x8E ); code_putbyte( $6 );}			
			| 	HL COMMA BC											{ code_putbyte( 0xED ); code_putbyte( 0x4A ); } 
			| 	HL COMMA DE											{ code_putbyte( 0xED ); code_putbyte( 0x5A ); } 
			| 	HL COMMA HL											{ code_putbyte( 0xED ); code_putbyte( 0x6A ); } 
			| 	HL COMMA SP											{ code_putbyte( 0xED ); code_putbyte( 0x7A ); } 
	;
	addcommand:	A COMMA A											{ code_putbyte( 0x87 ); }
			|	A COMMA B											{ code_putbyte( 0x80 ); }
			|	A COMMA C											{ code_putbyte( 0x81 ); }
			|	A COMMA D											{ code_putbyte( 0x82 ); }
			|	A COMMA E											{ code_putbyte( 0x83 ); }
			|	A COMMA H											{ code_putbyte( 0x84 ); }
			|	A COMMA L											{ code_putbyte( 0x85 ); }
			|	A COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x86 ); }
			|   A COMMA expression2									{ code_putbyte( 0xC6 ); code_putbyte( $3 );}
			|	A COMMA IXH											{ code_putbyte( 0xDD ); code_putbyte( 0x84 ); }
			|	A COMMA IXL											{ code_putbyte( 0xDD ); code_putbyte( 0x85 ); }
			|	A COMMA IYH											{ code_putbyte( 0xFD ); code_putbyte( 0x84 ); }
			|	A COMMA IYL											{ code_putbyte( 0xFD ); code_putbyte( 0x85 );  }
			|  	A COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD ); code_putbyte( 0x86 ); code_putbyte( $6 );}
			|  	A COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD ); code_putbyte( 0x86 ); code_putbyte( $6 );}			
			| 	HL COMMA BC											{ code_putbyte( 0x09 ); } 
			| 	HL COMMA DE											{ code_putbyte( 0x19 ); } 
			| 	HL COMMA HL											{ code_putbyte( 0x29 ); } 
			| 	HL COMMA SP											{ code_putbyte( 0x39 ); }
			|   IX COMMA BC											{ code_putbyte( 0xDD ); code_putbyte( 0x09 ); }
			|   IX COMMA DE											{ code_putbyte( 0xDD ); code_putbyte( 0x19 ); }
			|   IX COMMA IX											{ code_putbyte( 0xDD ); code_putbyte( 0x29 ); }
			|   IY COMMA BC											{ code_putbyte( 0xFD ); code_putbyte( 0x09 ); }
			|   IY COMMA DE											{ code_putbyte( 0xFD ); code_putbyte( 0x19 ); }
			|   IY COMMA IY											{ code_putbyte( 0xFD ); code_putbyte( 0x29 ); }
			|   IY COMMA SP											{ code_putbyte( 0xFD ); code_putbyte( 0x39 ); }					 
	;
	subcommand:	A 													{ code_putbyte( 0x97 ); }
			|	B													{ code_putbyte( 0x90 ); }
			|	C													{ code_putbyte( 0x91 ); }
			|	D													{ code_putbyte( 0x92 ); }
			|	E													{ code_putbyte( 0x93 ); }
			|	H													{ code_putbyte( 0x94 ); }
			|	L													{ code_putbyte( 0x95 ); }
			|	PARLEFT HL PARRIGHT									{ code_putbyte( 0x96 ); }
			|   expression2											{ code_putbyte( 0xD6 ); code_putbyte( $1 );}
			|	IXH													{ code_putbyte( 0xDD ); code_putbyte( 0x94 ); }
			|	IXL													{ code_putbyte( 0xDD ); code_putbyte( 0x95 ); }
			|	IYH													{ code_putbyte( 0xFD ); code_putbyte( 0x94 ); }
			|	IYL													{ code_putbyte( 0xFD ); code_putbyte( 0x95 ); }
			|  	PARLEFT IX OPADD expression PARRIGHT				{ code_putbyte( 0xDD ); code_putbyte( 0x96 ); code_putbyte( $4 );}
			|  	PARLEFT IY OPADD expression PARRIGHT				{ code_putbyte( 0xFD ); code_putbyte( 0x96 ); code_putbyte( $4 );}			
			;
	sbccommand:	A COMMA A											{ code_putbyte( 0x9F ); }
			|	A COMMA B											{ code_putbyte( 0x98 ); }
			|	A COMMA C											{ code_putbyte( 0x99 ); }
			|	A COMMA D											{ code_putbyte( 0x9A ); }
			|	A COMMA E											{ code_putbyte( 0x9B ); }
			|	A COMMA H											{ code_putbyte( 0x9C ); }
			|	A COMMA L											{ code_putbyte( 0x9D ); }
			|	A COMMA PARLEFT HL PARRIGHT							{ code_putbyte( 0x9E ); }
			|   A COMMA expression2									{ code_putbyte( 0xDE ); code_putbyte( $3 );}
			|	A COMMA IXH											{ code_putbyte( 0xDD ); code_putbyte( 0x9C ); }
			|	A COMMA IXL											{ code_putbyte( 0xDD ); code_putbyte( 0x9D ); }
			|	A COMMA IYH											{ code_putbyte( 0xFD ); code_putbyte( 0x9C ); }
			|	A COMMA IYL											{ code_putbyte( 0xFD ); code_putbyte( 0x9D );  }
			|  	A COMMA PARLEFT IX OPADD expression PARRIGHT		{ code_putbyte( 0xDD ); code_putbyte( 0x9E ); code_putbyte( $6 );}
			|  	A COMMA PARLEFT IY OPADD expression PARRIGHT		{ code_putbyte( 0xFD ); code_putbyte( 0x9E ); code_putbyte( $6 );}			
			| 	HL COMMA BC											{ code_putbyte( 0xED ); code_putbyte( 0x42 ); } 
			| 	HL COMMA DE											{ code_putbyte( 0xED ); code_putbyte( 0x52 ); } 
			| 	HL COMMA HL											{ code_putbyte( 0xED ); code_putbyte( 0x62 ); } 
			| 	HL COMMA SP											{ code_putbyte( 0xED ); code_putbyte( 0x72 ); } 
	;
	excommand:	AF COMMA AFPLUS					{ code_putbyte( 0x08); }
			|	PARLEFT SP PARRIGHT COMMA HL	{ code_putbyte( 0xE3); }
			| 	DE COMMA HL						{ code_putbyte( 0xEB); }
			| 	PARLEFT SP PARRIGHT COMMA IX	{ code_putbyte( 0xDD ); code_putbyte( 0xE3 ); }
			| 	PARLEFT SP PARRIGHT COMMA IY	{ code_putbyte( 0xFD ); code_putbyte( 0xE3 ); }
	;
	pushcommand:	BC							{ code_putbyte( 0xC5); }
			|		DE							{ code_putbyte( 0xD5); }
			|		HL							{ code_putbyte( 0xE5); }
			|		AF							{ code_putbyte( 0xF5); }
			|		IX							{ code_putbyte( 0xDD); code_putbyte( 0xE5); }
			|		IY							{ code_putbyte( 0xFD); code_putbyte( 0xE5); }
	;
	popcommand:	BC							{ code_putbyte( 0xC1); }
			|		DE							{ code_putbyte( 0xD1); }
			|		HL							{ code_putbyte( 0xE1); }
			|		AF							{ code_putbyte( 0xF1); }
			|		IX							{ code_putbyte( 0xDD); code_putbyte( 0xE1); }
			|		IY							{ code_putbyte( 0xFD); code_putbyte( 0xE1); }
	;
	jrcommand:	relativejump           				{ code_putbyte( 0x18 ); code_putbyte( $1 ); }
			|	NZ COMMA relativejump				{ code_putbyte( 0x20 ); code_putbyte( $3 ); }	
			|	Z COMMA relativejump				{ code_putbyte( 0x28 ); code_putbyte( $3 ); }	
			|	NC COMMA relativejump				{ code_putbyte( 0x30 ); code_putbyte( $3 ); }	
			|	C COMMA relativejump				{ code_putbyte( 0x38 ); code_putbyte( $3 ); }	
			
	;
	jpcommand:	expression             			{ code_putbyte( 0xC3 ); code_putword( $1 ); }
			|	NZ COMMA expression				{ code_putbyte( 0xC2 ); code_putword( $3 ); }	
			|	Z COMMA expression				{ code_putbyte( 0xCA ); code_putword( $3 ); }	
			|	NC COMMA expression				{ code_putbyte( 0xD2 ); code_putword( $3 ); }	
			|	C COMMA expression				{ code_putbyte( 0xDA ); code_putword( $3 ); }
			|	PO COMMA expression				{ code_putbyte( 0xE2 ); code_putword( $3 ); }	
			|	PE COMMA expression				{ code_putbyte( 0xEA ); code_putword( $3 ); }
			|	P COMMA expression				{ code_putbyte( 0xF2 ); code_putword( $3 ); }	
			|	M COMMA expression				{ code_putbyte( 0xFA ); code_putword( $3 ); }
			|	PARLEFT HL PARRIGHT				{ code_putbyte( 0xE9 ); }
			|	PARLEFT IX PARRIGHT				{ code_putbyte( 0xDD); code_putbyte( 0xE9 ); }
			|	PARLEFT IY PARRIGHT				{ code_putbyte( 0xFD); code_putbyte( 0xE9 ); }		
	;
	callcommand:	expression             			{ code_putbyte( 0xCD ); code_putword( $1 ); }
			|	NZ COMMA expression				{ code_putbyte( 0xC4 ); code_putword( $3 ); }	
			|	Z COMMA expression				{ code_putbyte( 0xCC ); code_putword( $3 ); }	
			|	NC COMMA expression				{ code_putbyte( 0xD4 ); code_putword( $3 ); }	
			|	C COMMA expression				{ code_putbyte( 0xDC ); code_putword( $3 ); }
			|	PO COMMA expression				{ code_putbyte( 0xE4 ); code_putword( $3 ); }	
			|	PE COMMA expression				{ code_putbyte( 0xEC ); code_putword( $3 ); }
			|	P COMMA expression				{ code_putbyte( 0xF4 ); code_putword( $3 ); }	
			|	M COMMA expression				{ code_putbyte( 0xFC ); code_putword( $3 ); }	
	;
	djnzcommand:	relativejump     				{ code_putbyte( 0x10 ); code_putbyte( $1 );  }	
	;
	relativejump:	INTEGER              						{ $$ = $1 - pc_get()-1;   }	
			|		LITERAL											{
																		int k = pc_get();
																		if ( sym_lookuplabel($1) == TRUE ) {
																			int jump = sym_getvalue($1);
																			int diff = jump - k - 2;
																			if ( diff > 127 || diff < -128 ) { 
																				generalerror("DJNZ Jump is too far away");
																			}
																			else {
																			   $$ = diff;  
																			}
																		}
																		else {
																			generalerror("Unknown Literal or Label");
																		}	
																	}
		
	;
	
	
	retcommand:									{  code_putbyte( 0xC9 );}
		| 	NZ									{  code_putbyte( 0xC0 ); }
		| 	Z									{  code_putbyte( 0xC8 ); }
		| 	NC									{  code_putbyte( 0xD0 ); }
		| 	C									{  code_putbyte( 0xD8 ); }
		| 	PO									{  code_putbyte( 0xE0 ); }
		| 	PE									{  code_putbyte( 0xE8 ); }
		| 	P									{  code_putbyte( 0xF0 ); }
		| 	M									{  code_putbyte( 0xF8 ); }
	;
	rstcommand:		expression					{ 	switch ( $1 ) {
														case 0x00:  code_putbyte( 0xC7 ); break;
														case 0x08:  code_putbyte( 0xCF ); break;
														case 0x10:  code_putbyte( 0xD7 ); break;
														case 0x18:  code_putbyte( 0xDF ); break;
														case 0x20:  code_putbyte( 0xE7 ); break;
														case 0x28:  code_putbyte( 0xEF ); break;
														case 0x30:  code_putbyte( 0xF7 ); break;
														case 0x38:  code_putbyte( 0xFF ); break;
														default: 
															generalerror("RST Value not valid"); break;
															
													}
												}	
	;
	expression: expritem						{ $$ = $1; }
		|	expression OPADD expritem			{ $$ = $1 + $3; }
		|	expression OPSUB expritem			{ $$ = $1 - $3; }
		|	expression OPMUL expritem			{ $$ = $1 * $3; }
		|	expression OPDIV expritem			{ $$ = $1 / $3; }
		|	PARLEFT expression PARRIGHT			{ $$ = $2; }
	;
	expression2: expritem						{ $$ = $1; }
		|	expression2 OPADD expritem			{ $$ = $1 + $3; }
		|	expression2 OPSUB expritem			{ $$ = $1 - $3; }
		|	expression2 OPMUL expritem			{ $$ = $1 * $3; }
		|	expression2 OPDIV expritem			{ $$ = $1 / $3; }
		|	expression2 OPADD PARLEFT expression2 PARRIGHT			{ $$ = $1 + $4; }
		|	expression2 OPSUB PARLEFT expression2 PARRIGHT			{ $$ = $1 - $4; }
		|	expression2 OPMUL PARLEFT expression2 PARRIGHT			{ $$ = $1 * $4; }
		|	expression2 OPDIV PARLEFT expression2 PARRIGHT			{ $$ = $1 / $4; }
		|	PARLEFT expression2 PARRIGHT OPADD expritem			{ $$ = $2 + $5; }
		|	PARLEFT expression2 PARRIGHT OPSUB expritem			{ $$ = $2 - $5; }
		|	PARLEFT expression2 PARRIGHT OPMUL expritem			{ $$ = $2 * $5; }
		|	PARLEFT expression2 PARRIGHT OPDIV expritem			{ $$ = $2 / $5; }
		|	PARLEFT expression2 PARRIGHT OPADD PARLEFT expression2 PARRIGHT			{ $$ = $2 + $6; }
		|	PARLEFT expression2 PARRIGHT OPSUB PARLEFT expression2 PARRIGHT			{ $$ = $2 - $6; }
		|	PARLEFT expression2 PARRIGHT OPMUL PARLEFT expression2 PARRIGHT			{ $$ = $2 * $6; }
		|	PARLEFT expression2 PARRIGHT OPDIV PARLEFT expression2 PARRIGHT			{ $$ = $2 / $6; }
	;
	expritem:	INTEGER				{	$$ = $1; }
		|		OPSUB INTEGER		{	$$ = -$2; }
		|		LITERAL				{	
										if ( sym_lookuplabel($1) == TRUE ) {
											$$ = sym_getvalue($1);
										}
										else {
											generalerror("Unknown Literal or Label");
										}	
									}
		|		DOLAR				{ $$ = pc_get(); }
	;
	listexpr:	expression						{ $$[1] = (uint8_t)$1; $$[0] = 1; }
		|		listexpr COMMA expression		{ $$[$$[0]+1] = (uint8_t)$3; $$[0] += 1; }
		| 		STRING							{ $$[0] = 0; for(size_t a=0;a<strlen($1);a++) { $$[$$[0]+1] = (uint8_t)$1[a]; $$[0] += 1; } }
		| 		listexpr COMMA STRING			{ for(size_t a=0;a<strlen($3);a++) { $$[$$[0]+1] = (uint8_t)$3[a]; $$[0] += 1; } }
		
	;

    reg8:      A	{ $$ = 7; }
             | B    { $$ = 0; }
             | C    { $$ = 1; }
             | D    { $$ = 2; }
             | E    { $$ = 3; }
             | H    { $$ = 4; }
             | L    { $$ = 5; }
     ;
