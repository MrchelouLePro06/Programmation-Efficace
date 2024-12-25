export OMP_NUM_THREADS=4
export KMP_AFFINITY=scatter
for i in {1..50} ; 
do
	/usr/bin/time -f "%e" -o tmp ./matrix-icx;
	cat tmp >> icx_scatter.data ;
done

export KMP_AFFINITY=compact
for i in {1..50} ; 
do
	/usr/bin/time -f "%e" -o tmp2 ./matrix-icx; 
	cat tmp2 >> icx_compact.data ;
done

