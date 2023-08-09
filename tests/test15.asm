# Testing undocumented
RLC (IX+3),B
LD H,L
BIT 5,(IX+3)
SLL (IX+1)
SRL (IY+3),H
RES 3,(IX+1),D
SET 3,(IX+1),C