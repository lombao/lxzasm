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

EQU                   		{  return EQU; }
ALIGN						{  return ALIGN; }
END							{  return END; }
DEFS						{  return DEFS; }
DS							{  return DEFS; }
DEFB						{  return DEFB; }
DB							{  return DEFB; }
DEFM						{  return DEFM; }
DM							{  return DEFM; }
DEFW						{  return DEFW; }
DW							{  return DEFW; }
ORG							{  return ORG; }
INCLUDEBIN					{  return INCBIN; }
INCBIN						{  return INCBIN; }

INC							{  return INC; }
DEC							{  return DEC; }

HALT						{  return HALT; }
NOP							{  return NOP; }
DI							{  return DI; }
EI							{  return EI; }


LDIR						{ return LDIR; }
LDI							{ return LDI; }
LD							{  return LD; }

PUSH		{ return PUSH; }
POP			{ return POP; }

SCF			{ return SCF; }

XOR			{  return XOR; }
AND			{  return AND; }
OR			{  return OR; }
NEG			{  return NEG; }

ADC			{  return ADC; }
ADD			{  return ADD; }
SUB			{  return SUB; }
SBC			{  return SBC; }


RST			{ return RST; }
RETN		{ return RETN; }
RETI		{ return RETI; }
DJNZ		{  return DJNZ; }
JR			{ return JR; }
RET			{ return RET; }
JP			{ return JP; }
CALL		{ return CALL; }

RLCA		{ return RLCA; }
RRCA		{ return RRCA; }
RRC			{ return RRC; }
RR			{ return RR;  }
RL			{ return RL;  }
RLA			{ return RLA; }
RLC			{ return RLC; }

SLL			{ return SLL; }
SRA			{ return SRA; }
SRL    		{ return SRL; }
SLA			{ return SLA; }

BIT			{ return BIT; }
RES			{ return RES; }
SET			{ return SET; }

CPIR		{ return CPIR; }
CPI			{ return CPI; }
CP			{ return CP; }
CPDR		{ return CPDR; }
CPD			{ return CPD; }

CCF			{ return CCF; }

IXH			{  return IXH; }
IXL			{  return IXL; }
IYH			{  return IYH; }
IYL			{  return IYL; }

AF			{  return AF; }
BC			{  return BC; }
DE			{  return DE; }
HL			{  return HL; }
IX			{  return IX; }
IY			{  return IY; }
AF'			{  return AFPLUS; }
SP			{  return SP; }

INIR		{ return INIR; }
INI			{ return INI; }
INDR		{ return INDR; }
IND			{ return IND; }
IN			{ return IN; }
OUTI		{ return OUTI; }
OUTD		{ return OUTD; }
OTDR		{ return OTDR; }
OTIR		{ return OTIR; }
OUT			{ return OUT; }

EXX			{ return EXX; }
EX			{ return EX; }

A					{  return A; }
F					{  return F; }
B					{  return B; }
C					{  return C; }
D					{  return D; }
E					{  return E; }
H					{  return H; }
L					{  return L; }
I					{  return I; }
R					{  return R; }


NZ					{ return NZ; }
Z					{ return Z; }
NC					{ return NC; }
PO					{ return PO; }
PE					{ return PE; }
P					{ return P; }
M					{ return M; }

,					{  return COMMA; }
\)					{  return PARRIGHT; }
\(					{  return PARLEFT; }
\+					{  return OPADD; }
\-					{  return OPSUB; }
\*					{  return OPMUL; }
\/					{  return OPDIV; }
									

#([A-F0-9]){1,4}      		{ 
								secondpasslval.normal =  (int) strtol(yytext+1, NULL, 16); 
								return INTEGER;
							 }
&([A-F0-9]){1,4}      		{ 
								secondpasslval.normal =  (int) strtol(yytext+1, NULL, 16); 
								return INTEGER;
							 }
							 
([A-F0-9]){1,4}H      		{ 
								secondpasslval.normal =  (int) strtol(yytext, NULL, 16); 
								return INTEGER;
							 }
							 
0x([A-F0-9]){1,4}      		{ 
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
					



[01][01][01][01][01][01][01][01]b 	{ 
										secondpasslval.normal = strtol(yytext,NULL,2); return INTEGER; 
									}
									
[0-9]+     			  				{ 
										secondpasslval.normal = atoi(yytext); return INTEGER; 
									}


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

\$						{ 	return DOLAR; }

%%

