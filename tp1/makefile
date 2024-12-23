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
		@echo '--------------------------début exécution------------------------' >> resultat/res_time_tp1.txt 2>&1
		@echo '--------------------------gcc------------------------------------' >> resultat/res_time_tp1.txt 2>&1
		@echo "Option d'optimisation -O0" >> resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_gcc_O0' >> resultat/res_time_tp1.txt 2>&1
		
		@echo "Option d'optimisation -O1" >> resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_gcc_O1' >>resultat/res_time_tp1.txt 2>&1
		
		@echo "Option d'optimisation -O2" >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_gcc_O2' >>resultat/res_time_tp1.txt 2>&1
		
		@echo "Option d'optimisation -O3" >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_gcc_O3' >>resultat/res_time_tp1.txt 2>&1
		
		@echo "Option d'optimisation -Os" >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_gcc_Os' >>resultat/res_time_tp1.txt 2>&1

		@echo '--------------------------icx------------------------------------' >>resultat/res_time_tp1.txt 2>&1
		@echo "Option d'optimisation -O0" >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_icx_O0' >>resultat/res_time_tp1.txt 2>&1
		
		@echo "Option d'optimisation -O1" >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_icx_O1' >>resultat/res_time_tp1.txt 2>&1
		
		@echo "Option d'optimisation -O2" >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_icx_O2' >>resultat/res_time_tp1.txt 2>&1
		
		@echo "Option d'optimisation -O3" >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_icx_O3' >>resultat/res_time_tp1.txt 2>&1
		
		@echo "Option d'optimisation -Os" >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_icx_Os'	 >>resultat/res_time_tp1.txt 2>&1
		
		@echo '--------------------------mkl------------------------------------' >>resultat/res_time_tp1.txt 2>&1
		bash -c 'time ./tp1_mkl' >>resultat/res_time_tp1.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n' >>resultat/res_time_tp1.txt 2>&1

time_statique :
		@echo '--------------------------début exécution------------------------' >> resultat/res_time_statique.txt 2>&1
		@echo '--------------------------gcc------------------------------------' >>resultat/res_time_statique.txt 2>&1
		@echo "Option d'optimisation -O0">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_gcc_O0'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O1">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_gcc_O1'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O2">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_gcc_O2'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O3">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_gcc_O3'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -Os">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_gcc_Os'>>resultat/res_time_statique.txt 2>&1
		
		@echo '--------------------------icx------------------------------------'>>resultat/res_time_statique.txt 2>&1
		@echo "Option d'optimisation -O0">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_icx_O0'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O1">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_icx_O1'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O2">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_icx_O2'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O3">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_icx_O3'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -Os">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_icx_Os'>>resultat/res_time_statique.txt 2>&1
		
		@echo '--------------------------mkl------------------------------------'>>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./tp1_statique_mkl'>>resultat/res_time_statique.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n' >>resultat/res_time_statique.txt 2>&1

time_mult :
		@echo '--------------------------début exécution------------------------'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation pour MULT avec gcc" >>resultat/res_time_mult.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_gcc_O0_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_gcc_O1_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_gcc_O2_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_gcc_O3_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_gcc_Os_MULT'>>resultat/res_time_mult.txt 2>&1
		
		@echo "Option d'optimisation pour MULT avec icx">>resultat/res_time_mult.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_icx_O0_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_icx_O1_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_icx_O2_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_icx_O3_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./tp1_icx_Os_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_time_mult.txt 2>&1
		
time_add :
		@echo '--------------------------début exécution------------------------'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation pour ADD avec gcc">>resultat/res_time_add.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_gcc_O0_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_gcc_O1_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_gcc_O2_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_gcc_O3_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_gcc_Os_ADD'>>resultat/res_time_add.txt 2>&1
		
		@echo "Option d'optimisation pour ADD avec icx">>resultat/res_time_add.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_icx_O0_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_icx_O1_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_icx_O2_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_icx_O3_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./tp1_icx_Os_ADD'>>resultat/res_time_add.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_time_add.txt 2>&1
		
time_scal :
		@echo '--------------------------début exécution------------------------'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation pour SCAL avec gcc">>resultat/res_time_scal.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_O0_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_O1_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_O2_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_O3_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_Os_SCAL'>>resultat/res_time_scal.txt 2>&1
		
		@echo "Option d'optimisation pour SCAL avec icx">>resultat/res_time_scal.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_icx_O0_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_icx_O1_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_O2_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_O3_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_Os_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_time_scal.txt 2>&1
		
test_add :
		@echo '--------------------------début exécution------------------------'>>resultat/res_test_add.txt 2>&1
		@echo '--------------------------gcc------------------------------------'>>resultat/res_test_add.txt 2>&1
		@echo "Option d'optimisation -O0">>resultat/res_test_add.txt 2>&1
		bash -c 'time ./tp1_statique_gcc_O0_ADD'>>resultat/res_test_add.txt 2>&1
		
		@echo "Option d'optimisation -O0">>resultat/res_test_add.txt 2>&1
		bash -c 'time ./tp1_gcc_O0_ADD'>>resultat/res_test_add.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_test_add.txt 2>&1
		
test_mult :
		@echo '--------------------------début exécution------------------------'>>resultat/res_test_mult.txt 2>&1
		@echo '--------------------------gcc------------------------------------'>>resultat/res_test_mult.txt 2>&1
		@echo "Option d'optimisation -O0">>resultat/res_test_mult.txt 2>&1
		bash -c 'time ./tp1_statique_gcc_O0_MULT'>>resultat/res_test_mult.txt 2>&1
		
		@echo "Option d'optimisation -O0">>resultat/res_test_mult.txt 2>&1
		bash -c 'time ./tp1_gcc_O0_MULT'>>resultat/res_test_mult.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_test_mult.txt 2>&1
		
test_scal :
		@echo '--------------------------début exécution------------------------'>>resultat/res_test_scal.txt 2>&1
		@echo '--------------------------gcc------------------------------------'>>resultat/res_test_scal.txt 2>&1
		@echo "Option d'optimisation -O0">>resultat/res_test_scal.txt 2>&1
		bash -c 'time ./tp1_statique_gcc_O0_SCAL'>>resultat/res_test_scal.txt 2>&1
		
		@echo "Option d'optimisation -O0">>resultat/res_test_scal.txt 2>&1
		bash -c 'time ./tp1_gcc_O0_SCAL'>>resultat/res_test_scal.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_test_scal.txt 2>&1
	
gprof:
		@echo '--------------------------début exécution------------------------'
		gcc -pg -O0 tp1.c -o tp1_gprof
		./tp1_gprof
		gprof -b tp1_gprof gmon.out > resultat/res.txt
		@echo '--------------------------fin exécution--------------------------'

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
		if [ -f gmon.out ]; then rm gmon.out; fi
		if [ -f *.gcda ]; then rm *.gcda; fi
		if [ -f *.profraw ]; then rm *.profraw; fi
		if [ -f *.out ]; then rm *.out; fi
