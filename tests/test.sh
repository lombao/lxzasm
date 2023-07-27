#!/bin/bash

for i in test*.asm; do
    rm -fr output.rom
    ../src/lxzasm $i
    cmp output.rom $i.output
    if [ $? -eq 0 ];
    then
    	echo "**** $i 	PASS"
    else
    	echo "**** $i 	FAIL"
    fi

    


        
done