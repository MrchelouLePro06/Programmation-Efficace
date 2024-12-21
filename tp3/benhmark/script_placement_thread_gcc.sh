export OMP_NUM_THREADS=4
export GOMP_CPU_AFFINITY="0 1 2 3"
for i in {1..50} ; 
do
	/usr/bin/time -f "%e" -o tmp ./matrix-gcc ;
	cat tmp >> bench_gcc_scatter.data ;
done

export GOMP_CPU_AFFINITY="0 8 1 9"
for i in {1..50} ; 
do
	/usr/bin/time -f "%e" -o tmp2 ./matrix-gcc ; 
	cat tmp2 >> bench_gcc_compact.data ;
done

