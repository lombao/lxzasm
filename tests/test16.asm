# Amstrad semanal N 70

ORG #A000
LD DE,#0505
LD IX,1000
LD BC,#0202
LD (ANCHO),BC
LD HL,#C000-80
LD B,D
LD D,0
DEC E
ADD HL,DE
LD DE,80
S_BUC: ADD HL,DE
DJNZ S_BUC
LD A,(ALTO)
SLA A
SLA A
SLA A
LD B,A
JR COLOC
P_BUC: LD A,H
AND 56
CP 56
JR Z,P_PAS
LD A,H
ADD A,8
LD H,A
JR COLOC
P_PAS: LD DE,0080
LD A,H
XOR 56
LD H,A
ADD HL,DE
COLOC: PUSH BC
PUSH HL
LD A,(ANCHO)
LD B,A
P_BUC1: LD A,(IX+10)
LD (HL),A
INC IX
INC HL
DJNZ P_BUC1
POP HL
POP BC
DJNZ P_BUC
RET
ANCHO: DEFS 1
ALTO: DEFS 1