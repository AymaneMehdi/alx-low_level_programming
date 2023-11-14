#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.0
