rm tmp*
export OMP_NUM_THREADS=4
for i in {1..50} ; 
do
	/usr/bin/time -f "%e" -o tmp ./matrix-gcc ;
	/usr/bin/time -f "%e" -o tmp2 ./matrix-icx ; 
	cat tmp >> gcc.data ;
	cat tmp2 >> icx.data ;
done