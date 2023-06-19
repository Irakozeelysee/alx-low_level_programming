#!/bin/bash

# Compile all .c into .o
gcc -c -fPIC *.c

# Create the dynamic library from .o
gcc -shared -o liball.so *.o

# removing .o
rm *.o
