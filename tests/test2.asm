ORG 0x100
LIMIT 200h
LD A,A
LD B,A
LD L,B
LD L,H
LD L,(HL)
LD (HL),E
LD (IX+3),20
LD (IX+0x10),L
LD (&4000),IY

