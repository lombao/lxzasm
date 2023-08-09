#!/bin/bash

for i in test*.asm; do
    rm -fr output.rom
    ../src/lxzasm $i
    cmp z80.bin $i.output
    if [ $? -eq 0 ];
    then
    	echo -e "**** $i    \t\t PASS"
    else
    	echo -e "**** $i    \t\t FAIL"
    fi        
done

# clean after
rm -f z80.bin
