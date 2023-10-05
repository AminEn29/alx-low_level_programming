#!/bin/bash

# a script that 
# callles
# that are in y

gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o
