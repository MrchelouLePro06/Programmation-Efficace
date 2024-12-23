Option=("time_dynamique" "time_statique" "time_mult" "time_add" "time_scal" "test_add" "test_mult" "test_scal")
Option2=("time_mult" "time_add" "time_scal")
Compiler=("dynamique" "statique" "functions")

for c in "${Compiler[@]}";
do 
    make $c
done

for opt in "${Option[@]}";
do 
    make $opt
done
