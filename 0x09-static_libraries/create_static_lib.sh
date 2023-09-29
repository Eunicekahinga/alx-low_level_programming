#!/bin/bash
# Compile all .c files in current directory to create objest file
gcc -c *.c
#To create a static library
ar rcs liball.a *.o
