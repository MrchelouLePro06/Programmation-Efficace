COMPILERS = gcc icx
OPTIMIZATIONS = O0 O1 O2 O3 Os
FUNCTIONS = MULT ADD SCAL

tp1:
	$(foreach comp, $(COMPILERS), \
		$(foreach opt, $(OPTIMIZATIONS), \
			$(comp) -$(opt) tp1.c -o tp1_$(comp)_$(opt);\
		) \
	)
	icx -mkl tp1.c -o tp1_mkl
	
statique :
	$(foreach comp, $(COMPILERS), \
		$(foreach opt, $(OPTIMIZATIONS), \
			$(comp) -$(opt) statique.c -o tp1_statique_$(comp)_$(opt);\
		) \
	)
	icx -mkl statique.c -o tp1_statique_mkl

functions:
	$(foreach f, $(FUNCTIONS), \
		$(foreach comp, $(COMPILERS), \
			$(foreach opt, $(OPTIMIZATIONS), \
				$(comp) -$(opt) -D $(f) tp1.c -o tp1_$(comp)_$(opt)_$(f); \
				$(comp) -$(opt) -D $(f) statique.c -o tp1_statique_$(comp)_$(opt)_$(f); \
			) \
		) \
	)

time_tp1:
		@echo '--------------------------gcc------------------------------------'
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_gcc_O0'
		
		@echo "Option d'optimisation -O1"
		bash -c 'time ./tp1_gcc_O1'
		
		@echo "Option d'optimisation -O2"
		bash -c 'time ./tp1_gcc_O2'
		
		@echo "Option d'optimisation -O3"
		bash -c 'time ./tp1_gcc_O3'
		
		@echo "Option d'optimisation -Os"
		bash -c 'time ./tp1_gcc_Os'
		
		@echo '--------------------------icx------------------------------------'
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_icx_O0'
		
		@echo "Option d'optimisation -O1"
		bash -c 'time ./tp1_icx_O1'
		
		@echo "Option d'optimisation -O2"
		bash -c 'time ./tp1_icx_O2'
		
		@echo "Option d'optimisation -O3"
		bash -c 'time ./tp1_icx_O3'
		
		@echo "Option d'optimisation -Os"
		bash -c 'time ./tp1_icx_Os'	
		
		@echo '--------------------------mkl------------------------------------'
		bash -c 'time ./tp1_mkl'

time_statique :
		@echo '--------------------------gcc------------------------------------'
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_statique_gcc_O0'
		
		@echo "Option d'optimisation -O1"
		bash -c 'time ./tp1_statique_gcc_O1'
		
		@echo "Option d'optimisation -O2"
		bash -c 'time ./tp1_statique_gcc_O2'
		
		@echo "Option d'optimisation -O3"
		bash -c 'time ./tp1_statique_gcc_O3'
		
		@echo "Option d'optimisation -Os"
		bash -c 'time ./tp1_statique_gcc_Os'
		
		@echo '--------------------------icx------------------------------------'
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_statique_icx_O0'
		
		@echo "Option d'optimisation -O1"
		bash -c 'time ./tp1_statique_icx_O1'
		
		@echo "Option d'optimisation -O2"
		bash -c 'time ./tp1_statique_icx_O2'
		
		@echo "Option d'optimisation -O3"
		bash -c 'time ./tp1_statique_icx_O3'
		
		@echo "Option d'optimisation -Os"
		bash -c 'time ./tp1_statique_icx_Os'	
		
		@echo '--------------------------mkl------------------------------------'
		bash -c 'time ./tp1_statique_mkl'

time_mult :
		@echo "Option d'optimisation pour MULT avec gcc"
		bash -c 'time ./tp1_gcc_O0_MULT'
		bash -c 'time ./tp1_gcc_O1_MULT'
		bash -c 'time ./tp1_gcc_O2_MULT'
		bash -c 'time ./tp1_gcc_O3_MULT'
		bash -c 'time ./tp1_gcc_Os_MULT'
		
		@echo "Option d'optimisation pour MULT avec icx"
		bash -c 'time ./tp1_icx_O0_MULT'
		bash -c 'time ./tp1_icx_O1_MULT'
		bash -c 'time ./tp1_icx_O2_MULT'
		bash -c 'time ./tp1_icx_O3_MULT'
		bash -c 'time ./tp1_icx_Os_MULT'
		
time_add :
		@echo "Option d'optimisation pour ADD avec gcc"
		bash -c 'time ./tp1_gcc_O0_ADD'
		bash -c 'time ./tp1_gcc_O1_ADD'
		bash -c 'time ./tp1_gcc_O2_ADD'
		bash -c 'time ./tp1_gcc_O3_ADD'
		bash -c 'time ./tp1_gcc_Os_ADD'
		
		
		@echo "Option d'optimisation pour ADD avec icx"
		bash -c 'time ./tp1_icx_O0_ADD'
		bash -c 'time ./tp1_icx_O1_ADD'
		bash -c 'time ./tp1_icx_O2_ADD'
		bash -c 'time ./tp1_icx_O3_ADD'
		bash -c 'time ./tp1_icx_Os_ADD'
		
time_scal :
		@echo "Option d'optimisation pour SCAL avec gcc"
		bash -c 'time ./tp1_gcc_O0_SCAL'
		bash -c 'time ./tp1_gcc_O1_SCAL'
		bash -c 'time ./tp1_gcc_O2_SCAL'
		bash -c 'time ./tp1_gcc_O3_SCAL'
		bash -c 'time ./tp1_gcc_Os_SCAL'
		
		@echo "Option d'optimisation pour SCAL avec icx"
		bash -c 'time ./tp1_icx_O0_SCAL'
		bash -c 'time ./tp1_icx_O1_SCAL'
		bash -c 'time ./tp1_gcc_O2_SCAL'
		bash -c 'time ./tp1_gcc_O3_SCAL'
		bash -c 'time ./tp1_gcc_Os_SCAL'
		
test_add :
		@echo '--------------------------gcc------------------------------------'
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_statique_gcc_O0_ADD'
		
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_gcc_O0_ADD'
		
test_mult :
		@echo '--------------------------gcc------------------------------------'
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_statique_gcc_O0_MULT'
		
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_gcc_O0_MULT'
		

test_scal :
		@echo '--------------------------gcc------------------------------------'
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_statique_gcc_O0_SCAL'
		
		@echo "Option d'optimisation -O0"
		bash -c 'time ./tp1_gcc_O0_SCAL'
	
gprof:
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
		rm error.log
		if [ -f res.txt ]; then rm res.txt; fi
		if [ -f gmon.out ]; then rm gmon.out; fi
		if [ -f *.gcda ]; then rm *.gcda; fi
		if [ -f *.profraw ]; then rm *.profraw; fi
		if [ -f *.out ]; then rm *.out; fi
		
