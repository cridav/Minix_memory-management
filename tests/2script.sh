#!/bin/sh
# skrypt do testowania dzia?ania funkcji systemowych
# HOLE_MAP oraz WORST_FIT
cc -o tal tal.c
cc -o w w.c
cc -o x x.c
chmem =8000 x
echo "-[ std ]----------------------------------------"
./w 0
for i in 1 2 3 4 5 6 7 8 9 10
do
./x 10 &
./tal
sleep 1
done
for i in 1 2 3 4 5 6 7 8 9 10
do
./tal
sleep 1
done

echo "-[ worst ]--------------------------------------"
./w 1
for i in 1 2 3 4 5 6 7 8 9 10
do
./x 10 &
./tal
sleep 1
done
for i in 1 2 3 4 5 6 7 8 9 10
do
./tal
sleep 1
done
echo "-[ std ]----------------------------------------"
./w 0 
