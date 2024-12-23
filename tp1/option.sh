Option=("O1" "O2" "O3" "Os")
for opt in "${Option[@]}";
do
    gcc -Q --help=optimizers -$opt | grep '\[enabled\]' | awk '{print $1}' > resultat/liste_option_$opt.txt
done