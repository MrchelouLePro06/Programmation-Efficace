#!/bin/bash
SOURCE="rw.c"
COMPILATEUR=("gcc" "icx")
OPTIMISATION=("O0" "O1" "O2" "O3" "Os")
OUTPUT="rw"

for comp in "${COMPILATEUR[@]}";
do
	for opt in "${OPTIMISATION[@]}";
	do
		$comp -$opt $SOURCE -o "${OUTPUT}_${opt}_${comp}"
	done
done
