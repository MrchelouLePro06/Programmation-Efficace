INPUT=("dynamique_gcc_O0" "dynamique_gcc_O1" "dynamique_gcc_O2" "dynamique_gcc_O3" "dynamique_gcc_Os" "dynamique_icx_O1" "dynamique_icx_O1" "dynamique_icx_O2" "dynamique_icx_O3" "dynamique_icx_Os"
"statique_gcc_O0" "statique_gcc_O1" "statique_gcc_O2" "statique_gcc_O3" "statique_gcc_Os" "statique_icx_O0" "statique_icx_O1" "statique_icx_O2" "statique_icx_O3" "statique_icx_Os")
OUTPUT="resultat/minimale.txt"

echo '--------Debut execution---------' >>"$OUTPUT"

for i in "${INPUT[@]}";
do
echo "$i" >> "$OUTPUT"
(time ./"$i") 2>> "$OUTPUT"
done
echo '--------Fin execution---------' >>"$OUTPUT"
