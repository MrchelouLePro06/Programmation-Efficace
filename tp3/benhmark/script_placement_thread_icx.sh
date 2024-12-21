export OMP_NUM_THREADS=4
export KMP_AFFINITY=scatter
for i in {1..50} ; 
do
	/usr/bin/time -f "%e" -o tmp ./matrix-icx;
	cat tmp >> bench_icx_scatter.data ;
done

export KMP_AFFINITY=compact
for i in {1..50} ; 
do
	/usr/bin/time -f "%e" -o tmp2 ./matrix-icx; 
	cat tmp2 >> bench_icx_compact.data ;
done

