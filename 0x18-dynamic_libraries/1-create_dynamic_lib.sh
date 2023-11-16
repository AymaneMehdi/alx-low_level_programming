#!/bin/bash
gcc -fPIC -C *.c
gcc -shared *.O -o liball.soC
