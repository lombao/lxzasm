# Lxzam 
# Test 1
ORG &4000

 	DEFM "This is a test message"
	DEFS 10,0xFF			; This is 10 bytes with 0xFF
POS1:	DEFM "For the test 1"		; If all ok, POS1 is address 0x4020

XOR A
END
