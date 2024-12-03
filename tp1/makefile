tp1 :
		gcc -O0 tp1.c -o tp1_O0
		gcc -O1 tp1.c -o tp1_O1
		gcc -O2 tp1.c -o tp1_O2
		gcc -O3 tp1.c -o tp1_O3
		gcc -Os tp1.c -o tp1_Os
		
		icx -O0 tp1.c -o tp1_icx_00
		icx -O1 tp1.c -o tp1_icx_01
		icx -O2 tp1.c -o tp1_icx_02
		icx -O3 tp1.c -o tp1_icx_03
		icx -Os tp1.c -o tp1_icx_0s
		
		icx -mkl tp1.c -o tp1_mkl

time :
		@echo '--------------------------gcc------------------------------------'
		bash -c 'time ./tp1_O0'
		bash -c 'time ./tp1_O1'
		bash -c 'time ./tp1_O2'
		bash -c 'time ./tp1_O3'
		bash -c 'time ./tp1_Os'
		
		@echo '--------------------------icx------------------------------------'
		bash -c 'time ./tp1_icx_00'
		bash -c 'time ./tp1_icx_01'
		bash -c 'time ./tp1_icx_02'
		bash -c 'time ./tp1_icx_03'
		bash -c 'time ./tp1_icx_0s'	
		
		@echo '--------------------------mkl------------------------------------'
		bash -c 'time ./tp1_mkl'
		
gprof :
		gcc -pg -O2 tp1.c -o tp1_gprof
		./tp1_gprof
		gprof -b tp1_gprof gmon.out > res.txt
		cat res.txt

fprofile:
		gcc tp1.c -fprofile-generate -o tp1_fpg
		./tp1_fpg
		gcc tp1.c -fprofile-use
		./a.out
		rm a.out
		
		icx tp1.c -fprofile-generate -o tp1_fpg_icx
		./tp1_fpg_icx
		icx tp1.c -fprofile-use
		./a.out
		
clean :
		rm tp1_*
		if [ -f res.txt ]; then rm res.txt; fi
		if [ -f gmon.out ]; then rm gmon.out; fi
		if [ -f *.gcda ]; then rm *.gcda; fi
		if [ -f *.profraw ]; then rm *.profraw; fi
		if [ -f *.out ]; then rm *.out; fi
