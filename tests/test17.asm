# Example of using DEFL
	ORG #A000
	DW $
	CONSTANT1 EQU 0x20
	VAR1	  DEFL 10
	VAR1	  DEFL 20
	LD  A,VAR1
