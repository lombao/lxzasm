# Amstrad semanal 06

		ORG #3D00
command:	CALL SETROM
		JR RDCMD

SETROM:		LD C,(IX+0)
		CALL #B90F
		JP   #B900

title:		CALL SETROM
		LD HL,(#C004)
		LD (pointr),HL
RDCMD:		CALL STRING
		LD HL,(pointr)
		LD A,(HL)
		AND A
		JR NZ,RDCMD1
		LD A,255
		LD (DE),A
		JR romoff
RDCMD1:		LD A,(HL)
		AND #7F
		CP #20
		JR C,RDCMD2
		LD (DE),A
		INC DE
RDCMD2:		BIT 7,(HL)
		INC HL
		JR Z,RDCMD1
		LD (pointr),HL
romoff:		XOR A
		LD C,A
		JP #B90F
STRING:		LD L,(IX+2)
		LD H,(IX+3)
		INC HL
		LD E,(HL)
		INC HL
		LD D,(HL)
		RET
copyit:		CALL SETROM
		XOR A
		LD C,A
		LD E,A
		LD L,A
		LD H,#C0
		LD D,#40
		LD B,D
		LDIR
		JR romoff
pointr:		DEFB "*","*"
