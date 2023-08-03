	ORG &4000 ; Start from 0x4000
DATA:
	DW  #FFAA 	; Store the word 0xFFAA
	DB  0xC3,0xC4	; Store individual bytes
	DS  0x11,10	; Store 17 times the value 0x0A ( 10 )
CODE:	CALL SUB1
	DS 10		; 10 spaces with 0
SUB1:	RET
	