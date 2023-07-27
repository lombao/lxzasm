## LXZASM

A yet another simple Z80 assembler

# Why ?
Why not. Next question

# HOW TO COMPILE
 
./autogen.sh
./configure
make
sudo make install

( note: the default PREFIX is /usr/local , but you can change it with the --prefix switch )

The resulting objects are
- $prefix/bin/lxzasm     
- $prefix/share/lxz80/examples ( some .asm files to test and try both lxzasm and lxzrun )

The build requirements are:
- Obviously, autoconf and automake
- flex and bison
- any non-prehistoric glibc will suffice

# BSD and other *nix 
It should run on BSD systems with minor or no changes at all but I did not test that myself.
If there is anything I can change to improve compatibility, please let me know.  

# Bugs, suggestions and comments
Please , send them to me: cesar dot lombao at gmail dot com .

