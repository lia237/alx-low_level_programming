#!/bin/bash
gcc -Wall -Wextra -Werror -c *.c
ar -rc libmy.a *.o
