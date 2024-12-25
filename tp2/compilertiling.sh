Cache=("L1" "L2" "L3")
Exo=("ijk" "ikj" "jik" "jki" "kij" "kji")
Option=("-floop-block" "-floop-block -floop-interchange")
Option2=("fb" "fb_fi")

fin="tp2_tiling.c"
fout="tp2_O2_tiling_"



for c in "${Cache[@]}";
do
    gcc -O2 -D $c $fin -o $fout$c
done

for e in "${Exo[@]}";
do
    for c in "${Cache[@]}";
    do
        gcc -O2 -D $c -D $e $fin -o $fout$e"_"$c
    done
done

for opt in "${Option[@]}";
do
    for c in "${Cache[@]}";
    do
        if [ "$opt" = "${Option[0]}" ]; then
            gcc -O2 -D $c $opt $fin -o $fout"fb_"$c
        else
            gcc -O2 -D $c $opt $fin -o $fout"fb_fi_"$c
        fi
    done
done