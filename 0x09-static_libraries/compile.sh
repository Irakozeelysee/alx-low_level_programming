#!/bin/bash
for file in *.c
do
	gcc -c "$file" -o "${file%.c}.o"
done
