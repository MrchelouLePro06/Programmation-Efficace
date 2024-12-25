Option=("unrolling" "fusion" "interchange" "tiling")
Option2=("tiling")

if [ -z "$1" ]; then
    echo "Erreur : tu dois passer un nombre >0 en argument. Par exemple : ./script.sh 1"
    exit 1
fi

for opt in "${Option[@]}";
do
    for ((i=0;i<$1;i++));
    do
        make $opt
    done
done