; Testing the pseudo instructions HIGH and LOW
;
	ORG #F1BC
LABEL1:	LD A,C
	DB LOW LABEL1
	DB HIGH LABEL1
