	ORG #A000
	LD B,(IX+0)
	LD A,(IX+2)
LOOP:	PUSH AF
	PUSH BC
	LD B,(IX+4)
	CALL #BC4D
	POP BC
	POP AF
	DJNZ LOOP
	RET
