#!/bin/bash
gcc -Wall -pentatic -Werror -c *.c
ar -rc liball.a *.o
ranlib liball.a
