#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.0
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
