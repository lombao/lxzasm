	ORG #8000
	CALL STACK
	POP AF
	CALL PRINT
	RET
STACK: CALL ESPERA
	LD H,A
	LD L,0
	EX (SP),HL
	PUSH HL
	RET
PRINT:  EQU #BB5A
ESPERA:	EQU #BB06
