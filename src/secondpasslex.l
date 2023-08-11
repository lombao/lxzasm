%{

#include <stdio.h>
#include <string.h>
#include "grammar-secondpass.tab.h"
#include "code.h"

%}

%option nounput
%option noinput
%option noyywrap
%option prefix="secondpass"

%%

[ \t]*					{ /* eat up whitespace */   }
\n						{  return ENTER; }

ASEG|aseg						{  return ASEG; }
EQU|equ                   		{  return EQU; }
ALIGN|align						{  return ALIGN; }
END|end							{  return END; }
TITLE|title|.title				{ return TITLE; }
HIGH|high						{ return HIGH; }
LOW|low							{ return LOW; }
DEFS|DS|ds|defs						{  return DEFS; }
DEFB|DB|db|defb						{  return DEFB; }
DEFM|DM|dm|defm						{  return DEFM; }
DEFW|DW|dw|defw						{  return DEFW; }
DEFL|DL|dl|defl						{  return DEFL; }

ORG|org							{  return ORG; }
INCLUDEBIN|includebin					{  return INCBIN; }
INCBIN|incbin						{  return INCBIN; }

INC|inc							{  return INC; }
DEC|dec							{  return DEC; }

ENT|ent							{ return ENT; }

HALT|halt						{  return HALT; }
NOP|nop							{  return NOP; }
DI|di							{  return DI; }
EI|ei							{  return EI; }


LDIR|ldir						{ return LDIR; }
LDI|ldi							{ return LDI; }
LD|ld							{  return LD; }

SCF|scf			{ return SCF; }
DAA|daa			{ return DAA; }

PUSH|push		{ return PUSH; }
POP|pop			{ return POP; }

XOR|xor			{  return XOR; }
AND|and			{  return AND; }
OR|or			{  return OR; }
NEG|neg			{  return NEG; }
ADC|adc			{  return ADC; }
ADD|add			{  return ADD; }
SUB|sub			{  return SUB; }
SBC|sbc			{  return SBC; }

RST|rst			{ return RST; }
RETN|retn		{ return RETN; }
RETI|reti		{ return RETI; }
DJNZ|djnz		{  return DJNZ; }
JR|jr			{ return JR; }
RET|ret			{ return RET; }
JP|jp			{ return JP; }
CALL|call		{ return CALL; }

RLCA|rlca		{ return RLCA; }
RRCA|rrca		{ return RRCA; }
RRA|rra			{ return RRA; }
RRC|rrc			{ return RRC; }
RR|rr			{ return RR;  }
RL|rl			{ return RL;  }
RLA|rla			{ return RLA; }
RLC|rlc			{ return RLC; }
SLL|sll			{ return SLL; }
SRA|sra			{ return SRA; }
SRL|srl    		{ return SRL; }
SLA|sla			{ return SLA; }
BIT|bit			{ return BIT; }
RES|res			{ return RES; }
SET|set			{ return SET; }

CPIR|cpir		{ return CPIR; }
CPI|cpi			{ return CPI; }
CP|cp			{ return CP; }
CPDR|cpdr		{ return CPDR; }
CPD|cpd			{ return CPD; }

CCF|ccf			{ return CCF; }

IXH|ixh			{  return IXH; }
IXL|ixl			{  return IXL; }
IYH|iyh			{  return IYH; }
IYL|iyl			{  return IYL; }

INIR|inir		{ return INIR; }
INI|ini			{ return INI; }
INDR|indr		{ return INDR; }
IND|ind			{ return IND; }
IN|in			{ return IN; }
OUTI|outi		{ return OUTI; }
OUTD|outd		{ return OUTD; }
OTDR|otdr		{ return OTDR; }
OTIR|otir		{ return OTIR; }
OUT|out			{ return OUT; }

AF|af			{  return AF; }
BC|bc			{  return BC; }
DE|de			{  return DE; }
HL|hl			{  return HL; }
IX|ix			{  return IX; }
IY|iy			{  return IY; }
AF'|af'			{  return AFPLUS; }
SP|sp			{  return SP; }

EXX|exx			{ return EXX; }
EX|ex			{ return EX; }

A|a					{  return A; }
F|f					{  return F; }
B|b					{  return B; }
C|c					{  return C; }
D|d					{  return D; }
E|e					{  return E; }
H|h					{  return H; }
L|l					{  return L; }
I|i					{  return I; }
R|r					{  return R; }

NZ|nz					{ return NZ; }
Z|z						{ return Z; }
NC|nc					{ return NC; }
PO|po					{ return PO; }
PE|pe					{ return PE; }
P|p						{ return P; }
M|m						{ return M; }

,					{  return COMMA; }
\)					{  return PARRIGHT; }
\(					{  return PARLEFT; }
\+					{  return OPADD; }
\-					{  return OPSUB; }
\*					{  return OPMUL; }
\/					{  return OPDIV; }
									

#([A-Fa-f0-9]){1,4}      		{ 
								secondpasslval.normal =  (int) strtol(yytext+1, NULL, 16); 
								return INTEGER;
							 }
&([A-Fa-f0-9]){1,4}      		{ 
								secondpasslval.normal =  (int) strtol(yytext+1, NULL, 16); 
								return INTEGER;
							 }
$([A-Fa-f0-9]){1,4}      		{ 
								secondpasslval.normal =  (int) strtol(yytext+1, NULL, 16); 
								return INTEGER;
							 }

0([A-Fa-f0-9]){1,4}[Hh]      		{ 
								secondpasslval.normal =  (int) strtol(yytext, NULL, 16); 
								return INTEGER;
							 }
							 
([A-Fa-f0-9]){1,4}[Hh]      		{ 
								secondpasslval.normal =  (int) strtol(yytext, NULL, 16); 
								return INTEGER;
							 }
							 
0x([A-Fa-f0-9]){1,4}      		{ 
								secondpasslval.normal =  (int) strtol(yytext+2, NULL, 16); 
								return INTEGER;
							 }

[A-Za-z][A-Za-z0-9_]*: 		{ /* ignore LABEL, it was dealt in firstpass */	}
							
[A-Za-z][A-Za-z0-9_]* 		{ 
								if ( strlen(yytext) >= MAX_SIZE_LITERAL ) {
									secondpasserror("Literal too big");
								}
								strcpy(secondpasslval.literal,yytext); return LITERAL; 
							}
					

%[01][01][01][01][01][01][01][01] 	{ 
										secondpasslval.normal = strtol(yytext,NULL,2); return INTEGER; 
									}

[01][01][01][01][01][01][01][01]b 	{ 
										secondpasslval.normal = strtol(yytext,NULL,2); return INTEGER; 
									}
									
[0-9]+     			  				{ 
										secondpasslval.normal = atoi(yytext); return INTEGER; 
									}



\"[^\n\"]\"  		{  	secondpasslval.normal = yytext[1]; return CHAR; 	}
'[^\n']'   			{  	secondpasslval.normal = yytext[1]; return CHAR; 	}
\/[^\n\/]\/   		{  	secondpasslval.normal = yytext[1]; return CHAR; 	}

\"[^\n\"]+\"  		{  
						if ( strlen(yytext) >= MAX_SIZE_LITERAL ) {
									secondpasserror("Literal too big");
						}
						strncpy(secondpasslval.literal,yytext+1,strlen(yytext)-1); secondpasslval.literal[strlen(yytext)-2]=0x0;return STRING; 
					}
'[^\n']+'   		{
						if ( strlen(yytext) >= MAX_SIZE_LITERAL ) {
									secondpasserror("Literal too big");
						}
						strncpy(secondpasslval.literal,yytext+1,strlen(yytext)-1); secondpasslval.literal[strlen(yytext)-2]=0x0;return STRING; 
					}
\/[^\n\/]+\/   		{
						if ( strlen(yytext) >= MAX_SIZE_LITERAL ) {
									firstpasserror("Literal too big");
						}
						strncpy(secondpasslval.literal,yytext+1,strlen(yytext)-1); secondpasslval.literal[strlen(yytext)-2]=0x0;return STRING; 
					}

\$						{ 	return DOLAR; }

%%

