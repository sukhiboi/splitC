#! /bin/bash

rm -rf *.o
gcc -c *.c
gcc -o filter *.o
./filter
rm -rf *.o
rm filter