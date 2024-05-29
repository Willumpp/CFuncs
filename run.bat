@REM generate object files (compiled files without linking)
gcc -x c -c .\Cfuncs.c
gcc -x c -c .\main.c

@REM Link two objects files and output in main.exe
gcc .\Cfuncs.o .\main.o -o main.exe

@REM Run code
.\main.exe