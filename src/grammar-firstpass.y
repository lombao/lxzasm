
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
}


%code provides
{
  // Tell Flex the expected prototype of yylex.
  #define YY_DECL int firstpasslex ()
  // Declare the scanner.
  YY_DECL;

}

/* We want verbose level of errors */
%define parse.error verbose

/* Definte types of non terminals */
%type <normal>   	expression expression2
%type <normal>  	expritem
%type <byte>		listexpr

/* tokens */

%token ENTER DOLAR

%token EQU ORG ALIGN END INCBIN
%token DEFS DEFB DEFM DEFW


%token IXH IXL IYH IYL
%token AF BC DE HL IX IY SP AFPLUS
%token A F B C D E H L I R 

%token INC DEC
%token ADC ADD SUB SBC

%token DJNZ JR RET RETN RETI RST JP CALL

%token DI EI LD
%token HALT NOP

%token XOR AND OR NEG

%token RLCA RRCA RLA RLC SLA SLL SRL RR RL RRC SRA

%token BIT SET RES

%token LDI LDIR

%token PUSH POP

%token CP
%token CPI CPIR CPD CPDR

%token EX EXX

%token SCF
%token CCF

%token COMMA

%token NZ Z NC PO PE P M

%token IN OUT INI INIR IND INDR OUTI OUTD OTIR OTDR

%token <literal> LABEL
%token <literal> LITERAL
%token <normal> INTEGER
%token <literal> STRING


%token PARLEFT PARRIGHT
%token OPADD OPSUB OPMUL OPDIV


%%
    program:  	lines			{	}
    ;
    lines:  line         	{   line_increase();	}
		|	lines line   	{ 	line_increase(); 	}
	;	
    line: instruction ENTER						{ }
		| directive ENTER						{ }
		| LITERAL ENTER							{ firstpasserror("Syntax Error: Unknown instruction"); }
		| LABEL instruction ENTER				{ sym_addlabel($1,pc_get_last()); }
		| LABEL directive ENTER					{ sym_addlabel($1,pc_get_last()); }
		| LABEL EQU	expression ENTER			{ sym_addlabel($1,$3); }	
		| LABEL ENTER							{ sym_addlabel($1,pc_get()); }
		| ENTER									{ }	
	;
	directive: 		END									{ return 0;}
			|	DEFS	expression						{ pc_inc($2); }
			| 	DEFS	expression COMMA expression		{ pc_inc($2); }
			|   DEFB	listexpr						{ pc_inc($2); }
			|   DEFM	STRING							{ pc_inc( strlen($2)); }
			|	DEFW	expression						{ pc_inc(2); }	
			|   LITERAL EQU expression					{ sym_addlabel($1,$3); }
			|	ORG	INTEGER								{ pc_init($2); }
			|	INCBIN	STRING							{ pc_inc( preproc_include_bin($2,NULL)); }
			|   ALIGN   expression	{ 
										int pc = pc_get();
										int k = ((( pc / $2)+1)*$2); 
										for  (int a = pc; a < k; a++) { 
											pc_inc(1); 
										} 
									}
	;
	instruction: NOP 					{ pc_inc(1); } 
				| DI 					{ pc_inc(1); } 
				| EI 					{ pc_inc(1); } 
				| HALT					{ pc_inc(1); }
				| RLCA					{ pc_inc(1); }
				| RRCA					{ pc_inc(1); }
				| RLA					{ pc_inc(1); }
				| CCF					{ pc_inc(1); }	
				| CPIR					{ pc_inc(2); }
				| CPI					{ pc_inc(2); }
				| CPDR					{ pc_inc(2); }
				| CPD					{ pc_inc(2); }
				| RET					{ pc_inc(1); }
				| RETN					{ pc_inc(2); }
				| RETI					{ pc_inc(2); }
				| RST					{ pc_inc(1); }	
				| EXX					{ pc_inc(1); }
				| INI					{ pc_inc(2); }
				| INIR					{ pc_inc(2); }
				| IND					{ pc_inc(2); }
				| INDR					{ pc_inc(2); }
				| OUTI					{ pc_inc(2); }
				| OTIR					{ pc_inc(2); }
				| OUTD					{ pc_inc(2); }
				| OTDR					{ pc_inc(2); }	
				| RET condflag			{ pc_inc(1); }	
				| SCF 					{ pc_inc(1); }
				| LDI					{ pc_inc(2); }
				| LDIR					{ pc_inc(2); }
				| NEG					{ pc_inc(2); }
				| LD  ldcommand			{ }
				| OR orcommand			{ }
				| XOR orcommand			{ } /* same pattern as or */
				| AND orcommand			{ } /* same pattern as or */
				| CP orcommand			{ }	/* same pattern as or */
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
				| PUSH pushcommand		{ }
				| POP popcommand		{ }
				| IN incommand			{ }
				| OUT outcommand		{ }
				| BIT bitcommand		{ }
				| RES bitcommand		{ } /* same pattern as bit */
				| SET bitcommand		{ } /* same pattern as bit */
				| SLA slacommand		{ }
				| SRA slacommand		{ } /* sra and sla are the same pattern */
				| SRL slacommand		{ } /* sra and sla are the same pattern */
				| RL  slacommand		{ } /* same pattern as sla */
				| RR  slacommand		{ } /* same pattern as sla */
				| RRC slacommand		{ } /* same pattern as sla */
				| RLC slacommand		{ } /* same pattern as sla */

	;
	slacommand: reg8												{ pc_inc(2); }
			|	PARLEFT HL PARRIGHT									{ pc_inc(2); }
			| 	PARLEFT indexreg OPADD expression PARRIGHT 			{ pc_inc(4); }
	;
	bitcommand:	INTEGER COMMA reg8									{ pc_inc(2); }
			| 	INTEGER COMMA PARLEFT HL PARRIGHT 					{ pc_inc(2); }
			| 	INTEGER COMMA PARLEFT indexreg OPADD expression2 PARRIGHT { pc_inc(4); } 
	;
	incommand:	reg8 COMMA PARLEFT C PARRIGHT				{  pc_inc(2); }
			|	reg8 COMMA PARLEFT expression2 PARRIGHT			{  pc_inc(2); }
			|	PARLEFT C PARRIGHT								{  pc_inc(2); }		
	;
	outcommand:	reg8 COMMA PARLEFT expression2 PARRIGHT		{ pc_inc(2); }
			|	reg8 COMMA PARLEFT C PARRIGHT				{ pc_inc(2); }	
			|	PARLEFT C PARRIGHT							{ pc_inc(2); }
	;
	ldcommand:	reg8 COMMA reg8										{ pc_inc(1); }
			| 	reg8 COMMA expression2 								{ pc_inc(2); }
			| 	reg8 COMMA PARLEFT reg16 PARRIGHT    				{ pc_inc(1); }	
			|	reg8 COMMA PARLEFT expression2 PARRIGHT				{ pc_inc(3); }	
			|	reg8 COMMA PARLEFT indexreg OPADD expression PARRIGHT	{ pc_inc(3); }				
			| 	PARLEFT reg16 PARRIGHT COMMA reg8					{ pc_inc(1); }
			| 	PARLEFT reg16 PARRIGHT COMMA expression2			{ pc_inc(2); }
			| 	HL COMMA PARLEFT expression2 PARRIGHT				{ pc_inc(3); }
			|	DE COMMA PARLEFT expression2 PARRIGHT				{ pc_inc(4); }
			|	BC COMMA PARLEFT expression2 PARRIGHT				{ pc_inc(4); }
			|	SP COMMA PARLEFT expression2 PARRIGHT				{ pc_inc(4); }		
			|	IX COMMA PARLEFT expression2 PARRIGHT				{ pc_inc(4); }	
			|	IY COMMA PARLEFT expression2 PARRIGHT				{ pc_inc(4); }	
			| 	HL COMMA expression2								{ pc_inc(3); }
			| 	BC COMMA expression2								{ pc_inc(3); }
			| 	DE COMMA expression2								{ pc_inc(3); }
			| 	SP COMMA expression2								{ pc_inc(3); }		
		   	|	IX COMMA expression2 								{ pc_inc(4); }	
			|	IY COMMA expression2 								{ pc_inc(4); }	
			|	PARLEFT indexreg OPADD expression PARRIGHT COMMA expression	{ pc_inc(4); } 	
			|	PARLEFT indexreg OPADD expression PARRIGHT COMMA reg8		{ pc_inc(3); } 			
			|	PARLEFT expression2 PARRIGHT COMMA reg8						{ pc_inc(3); } 	
			|	PARLEFT expression2 PARRIGHT COMMA indexreg					{ pc_inc(4); } 			
			|	PARLEFT expression2 PARRIGHT COMMA HL					{ pc_inc(3); } 			
			|	PARLEFT expression2 PARRIGHT COMMA BC					{ pc_inc(4); } 			
			|	PARLEFT expression2 PARRIGHT COMMA DE					{ pc_inc(4); } 			
			|	PARLEFT expression2 PARRIGHT COMMA SP					{ pc_inc(4); } 			
			


	;
	orcommand: 	reg8												{ pc_inc(1); }
			|	expression											{ pc_inc(2); }
			|	PARLEFT HL PARRIGHT									{ pc_inc(1); }
			| 	PARLEFT indexreg OPADD expression PARRIGHT 			{ pc_inc(3); }
			| 	index8reg          									{ pc_inc(2); }
	;
	inccommand:	reg8												{ pc_inc(1); }
			| 	reg16												{ pc_inc(1); }
			| 	PARLEFT HL PARRIGHT 								{ pc_inc(1); }
			|	PARLEFT indexreg OPADD expression PARRIGHT 			{ pc_inc(3); }
			| 	indexreg 											{ pc_inc(1); }
			| 	index8reg											{ pc_inc(1); }
	;
	deccommand:	reg8												{ pc_inc(1); }
			| 	reg16												{ pc_inc(1); }
			| 	PARLEFT HL PARRIGHT 								{ pc_inc(1); }
			|	PARLEFT indexreg OPADD expression PARRIGHT 			{ pc_inc(3); }
			| 	indexreg 											{ pc_inc(1); }
			| 	index8reg											{ pc_inc(1); }
	;
	adccommand:	A COMMA expression									{ pc_inc(2); }
			| 	A COMMA reg8										{ pc_inc(1); }
			| 	A COMMA index8reg									{ pc_inc(2); }
			|	A COMMA PARLEFT HL PARRIGHT							{ pc_inc(1); }
			| 	A COMMA PARLEFT indexreg OPADD expression PARRIGHT	{ pc_inc(3); }	
			| 	HL COMMA reg16										{ pc_inc(2); } 
	;
	addcommand:	A COMMA expression									{ pc_inc(2); }
			| 	A COMMA reg8										{ pc_inc(1); }
			| 	A COMMA index8reg									{ pc_inc(2); }
			|	A COMMA PARLEFT HL PARRIGHT							{ pc_inc(1); }
			| 	A COMMA PARLEFT indexreg OPADD expression PARRIGHT	{ pc_inc(3); }	
			| 	HL COMMA reg16										{ pc_inc(1); } 
			| 	indexreg COMMA reg16  								{ pc_inc(2); } 		
	;
	subcommand:	reg8												{ pc_inc(1); }
			|	expression											{ pc_inc(2); }
			|	PARLEFT HL PARRIGHT									{ pc_inc(1); }
			| 	PARLEFT indexreg OPADD expression PARRIGHT 			{ pc_inc(3); }
			| 	index8reg          									{ pc_inc(2); }
	;
	sbccommand:	A COMMA expression									{ pc_inc(2); }
			| 	A COMMA reg8										{ pc_inc(1); }
			| 	A COMMA index8reg									{ pc_inc(2); }
			|	A COMMA PARLEFT HL PARRIGHT							{ pc_inc(1); }
			| 	A COMMA PARLEFT indexreg OPADD expression PARRIGHT	{ pc_inc(3); }	
			| 	HL COMMA reg16										{ pc_inc(2); } 
	;
	excommand:	AF COMMA AFPLUS					{  pc_inc(1);  }
			|	PARLEFT SP PARRIGHT COMMA HL	{  pc_inc(1);  }
			| 	DE COMMA HL						{  pc_inc(1);  }
			| 	PARLEFT SP PARRIGHT COMMA indexreg	{  pc_inc(2);  }
	;
	djnzcommand:	expression              						{ pc_inc(2); }
	;
	jrcommand:	expression											{ pc_inc(2); }
			|   condflag COMMA expression							{ pc_inc(2); }
	;
	jpcommand:	expression											{ pc_inc(3); }
			|   condflag COMMA expression							{ pc_inc(3); }
			|   PARLEFT HL PARRIGHT									{ pc_inc(1); }
			| 	PARLEFT indexreg PARRIGHT							{ pc_inc(2); }
	;
	callcommand:	expression										{ pc_inc(3); }
			|   condflag COMMA expression							{ pc_inc(3); }
	;
	pushcommand:	reg16		{  pc_inc(1);  }
			|		indexreg	{  pc_inc(2);  }
			|     	AF			{ pc_inc(1); }
	;
	popcommand:	reg16		{  pc_inc(1);  }
			|	indexreg	{  pc_inc(2);  }
			|   AF			{  pc_inc(1); }
	;
	reg8:		A
			|	F
			| 	B
			|	C
			|	D
			|	E
			|	H
			|	L
			|   I
			|   R
	;		
	reg16:
				HL
			|	BC
			|	DE
			|	SP
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
	listexpr:	expression						{ $$ = ($1 > 0xFF)?2:1; }
		|		STRING							{ $$ = strlen($1); }
		|		listexpr COMMA expression			{ $$ = $1 + (($3 > 0xFF)?2:1); }
		|		listexpr COMMA STRING			{ $$ = $1 + strlen($3); }
	;
	expritem:	INTEGER				{	$$ = $1;  }
		|		OPSUB INTEGER		{ 	$$ = -$2; }
		|		LITERAL				{	
										if ( sym_lookuplabel($1) == TRUE ) {
											$$ = sym_getvalue($1);
										}
										else {
											$$ = 0;
										}	
									}
		|		DOLAR				{ $$ = pc_get(); }
	;
	indexreg:		IX
				|	IY
	;
	index8reg:	IXH
			|	IXL
			|	IYH
			|	IYL
	;
	condflag:	NZ 
			| 	Z 
			|	NC
			| 	C
			|	PO
			|	PE
			| 	P
			| 	M
	;
