#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Archive the object files into a static library
ar rcs libmy.a *.o

# run index object
ranlib libmy.a

# Clean up the object files
rm *.o
