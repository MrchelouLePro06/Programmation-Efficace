tp2 :
		gcc -O2 tp2.c -o tp2_O2
		gcc -O2 tp2_loop.c -o tp2_O2_loop
		gcc -O2 tp2.c -funroll-loops -o tp2_O2_fl
		
time :
		bash -c 'time ./tp2_O2'
		bash -c 'time ./tp2_O2_loop'
		bash -c 'time ./tp2_O2_fl'
		
clean :
		rm tp2_O*
