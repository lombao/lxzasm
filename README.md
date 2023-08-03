# LXZASM

A yet another simple Z80 assembler

## Why ?
Why not. Next question

## HOW TO COMPILE
``` 
cd src
make
cp lxzasm <your preferred location>
```

## Tests and examples
Inside the folder tests you will find code snippets and examples
There is an script that will automatically compile them and compare 
them with the expected correct value

```
cd src
make
cd ../tests
./tests.sh
```

## The build requirements are:
- Obviously, autoconf and automake
- flex and bison
- any non-prehistoric glibc will suffice

## BSD and other *nix 
It should run on BSD systems with minor or no changes at all but I did not test that myself.
If there is anything I can change to improve compatibility, please let me know.  

## Bugs, suggestions and comments
Please , send them to me: cesar dot lombao at gmail dot com .

