#!/bin/bash
cd "$(dirname "$0")"

# Generate object files (compiled files without linking)
gcc -x c -c ./CFuncs.c
gcc -x c -c ./main.c

# Link two objects files and output in main.exe
gcc ./CFuncs.o ./main.o -o ./main

# Run code
./main