#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fpic *.c
rm 0-main.o
gcc -shared -o liball.so *.o
