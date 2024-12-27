#!/bin/bash

INPUT=("cpu_O0_gcc" "cpu_O1_gcc" "cpu_O2_gcc" "cpu_O3_gcc" "cpu_Os_gcc" "cpu_O0_icx" "cpu_O1_icx" "cpu_O2_icx" "cpu_O3_icx" "cpu_Os_icx")
RES="res10s.csv"

if [ -z "$1" ]; then
    echo "Erreur : tu dois passer un nombre >=10 en 1er argument. Par exemple : ./exec.sh 10 2"
    exit 1
fi

BOUCLE=$2
if [ -z "$2" ]; then
    BOUCLE=1
fi

TEMPS=$(($1+2))
echo "Compilateur,Optimisation,Average_Power,Total_Energy,Temps" > $RES
for ((k=1;k<=$BOUCLE;k++));
do
    for i in "${INPUT[@]}";
    do
        OPTIMISATION=$(echo $i | cut -d'_' -f2)
        COMPILEUR=$(echo $i | cut -d'_' -f3)
        ./$i $TEMPS &

        PID=$!
        echo "lancement de $i avec PID : $PID"
        ecofloc=$(/opt/ecofloc/./ecofloc-cpu.out -p $PID -i 1000 -t $1)

        power=$(echo "$ecofloc" | grep "Average Power" | awk '{print $4}')
        energy=$(echo "$ecofloc" | grep "Total Energy" | awk '{print $4}')

        echo "${COMPILEUR},${OPTIMISATION},${power},${energy},$1" >> $RES

        wait $PID
        sleep 1
    done
    
done