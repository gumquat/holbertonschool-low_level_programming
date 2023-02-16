#!/bin/bash
gcc -g -c *.c
ar rc liball.a *.o
# REMOVED: ranlib liball.a
