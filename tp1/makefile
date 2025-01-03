COMPILERS = gcc icx
OPTIMIZATIONS = O0 O1 O2 O3 Os
FUNCTIONS = MULT ADD SCAL

dynamique:
	$(foreach comp, $(COMPILERS), \
		$(foreach opt, $(OPTIMIZATIONS), \
			$(comp) -$(opt) dynamique.c -o dynamique_$(comp)_$(opt);\
		) \
	)
	icx -mkl dynamique.c -o dynamique_mkl
	
statique :
	$(foreach comp, $(COMPILERS), \
		$(foreach opt, $(OPTIMIZATIONS), \
			$(comp) -$(opt) statique.c -o statique_$(comp)_$(opt);\
		) \
	)
	icx -mkl statique.c -o statique_mkl

functions:
	$(foreach f, $(FUNCTIONS), \
		$(foreach comp, $(COMPILERS), \
			$(foreach opt, $(OPTIMIZATIONS), \
				$(comp) -$(opt) -D $(f) dynamique.c -o dynamique_$(comp)_$(opt)_$(f); \
				$(comp) -$(opt) -D $(f) statique.c -o statique_$(comp)_$(opt)_$(f); \
			) \
		) \
	)

time_dynamique:
		@echo '--------------------------début exécution------------------------' >> resultat/res_time_dynamique.txt 2>&1
		@echo '--------------------------gcc------------------------------------' >> resultat/res_time_dynamique.txt 2>&1
		@echo "Option d'optimisation -O0" >> resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_gcc_O0' >> resultat/res_time_dynamique.txt 2>&1
		
		@echo "Option d'optimisation -O1" >> resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_gcc_O1' >>resultat/res_time_dynamique.txt 2>&1
		
		@echo "Option d'optimisation -O2" >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_gcc_O2' >>resultat/res_time_dynamique.txt 2>&1
		
		@echo "Option d'optimisation -O3" >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_gcc_O3' >>resultat/res_time_dynamique.txt 2>&1
		
		@echo "Option d'optimisation -Os" >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_gcc_Os' >>resultat/res_time_dynamique.txt 2>&1

		@echo '--------------------------icx------------------------------------' >>resultat/res_time_dynamique.txt 2>&1
		@echo "Option d'optimisation -O0" >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_icx_O0' >>resultat/res_time_dynamique.txt 2>&1
		
		@echo "Option d'optimisation -O1" >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_icx_O1' >>resultat/res_time_dynamique.txt 2>&1
		
		@echo "Option d'optimisation -O2" >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_icx_O2' >>resultat/res_time_dynamique.txt 2>&1
		
		@echo "Option d'optimisation -O3" >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_icx_O3' >>resultat/res_time_dynamique.txt 2>&1
		
		@echo "Option d'optimisation -Os" >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_icx_Os'	 >>resultat/res_time_dynamique.txt 2>&1
		
		@echo '--------------------------mkl------------------------------------' >>resultat/res_time_dynamique.txt 2>&1
		bash -c 'time ./dynamique_mkl' >>resultat/res_time_dynamique.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n' >>resultat/res_time_dynamique.txt 2>&1

time_statique :
		@echo '--------------------------début exécution------------------------' >> resultat/res_time_statique.txt 2>&1
		@echo '--------------------------gcc------------------------------------' >>resultat/res_time_statique.txt 2>&1
		@echo "Option d'optimisation -O0">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_gcc_O0'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O1">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_gcc_O1'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O2">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_gcc_O2'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O3">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_gcc_O3'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -Os">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_gcc_Os'>>resultat/res_time_statique.txt 2>&1
		
		@echo '--------------------------icx------------------------------------'>>resultat/res_time_statique.txt 2>&1
		@echo "Option d'optimisation -O0">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_icx_O0'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O1">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_icx_O1'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O2">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_icx_O2'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -O3">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_icx_O3'>>resultat/res_time_statique.txt 2>&1
		
		@echo "Option d'optimisation -Os">>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_icx_Os'>>resultat/res_time_statique.txt 2>&1
		
		@echo '--------------------------mkl------------------------------------'>>resultat/res_time_statique.txt 2>&1
		bash -c 'time ./statique_mkl'>>resultat/res_time_statique.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n' >>resultat/res_time_statique.txt 2>&1

time_mult :
		@echo '--------------------------début exécution------------------------'>>resultat/res_time_mult.txt 2>&1
		@echo '-----------------statique-------------------'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation pour MULT avec gcc en statique" >>resultat/res_time_mult.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_gcc_O0_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_gcc_O1_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_gcc_O2_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_gcc_O3_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_gcc_Os_MULT'>>resultat/res_time_mult.txt 2>&1
		
		@echo "Option d'optimisation pour MULT avec icx en statique ">>resultat/res_time_mult.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_icx_O0_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_icx_O1_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_icx_O2_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_icx_O3_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./statique_icx_Os_MULT'>>resultat/res_time_mult.txt 2>&1

		@echo '-----------------dynamique-------------------'>>resultat/res_time_mult.txt 2>&1

		@echo "Option d'optimisation pour MULT avec gcc en dynamique" >>resultat/res_time_mult.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_gcc_O0_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_gcc_O1_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_gcc_O2_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_gcc_O3_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_gcc_Os_MULT'>>resultat/res_time_mult.txt 2>&1
		
		@echo "Option d'optimisation pour MULT avec icx en dynamique">>resultat/res_time_mult.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_icx_O0_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_icx_O1_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_icx_O2_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_icx_O3_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_mult.txt 2>&1
		bash -c 'time ./dynamique_icx_Os_MULT'>>resultat/res_time_mult.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_time_mult.txt 2>&1
		
time_add :
		@echo '--------------------------début exécution------------------------'>>resultat/res_time_add.txt 2>&1
		@echo '-----------------statique-------------------'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation pour ADD avec gcc en statique">>resultat/res_time_add.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_gcc_O0_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_gcc_O1_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_gcc_O2_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_gcc_O3_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_gcc_Os_ADD'>>resultat/res_time_add.txt 2>&1
		
		@echo "Option d'optimisation pour ADD avec icx en statique">>resultat/res_time_add.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_icx_O0_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_icx_O1_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_icx_O2_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_icx_O3_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./statique_icx_Os_ADD'>>resultat/res_time_add.txt 2>&1

		@echo '-----------------dynamique-------------------'>>resultat/res_time_add.txt 2>&1

		@echo "Option d'optimisation pour ADD avec gcc en dynamique">>resultat/res_time_add.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_gcc_O0_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_gcc_O1_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_gcc_O2_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_gcc_O3_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_gcc_Os_ADD'>>resultat/res_time_add.txt 2>&1
		
		@echo "Option d'optimisation pour ADD avec icx en dynamique">>resultat/res_time_add.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_icx_O0_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_icx_O1_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_icx_O2_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_icx_O3_ADD'>>resultat/res_time_add.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_add.txt 2>&1
		bash -c 'time ./dynamique_icx_Os_ADD'>>resultat/res_time_add.txt 2>&1

		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_time_add.txt 2>&1
		
time_scal :
		@echo '--------------------------début exécution------------------------'>>resultat/res_time_scal.txt 2>&1
		@echo '-----------------statique-------------------'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation pour SCAL avec gcc">>resultat/res_time_scal.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_gcc_O0_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_gcc_O1_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_gcc_O2_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_gcc_O3_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_gcc_Os_SCAL'>>resultat/res_time_scal.txt 2>&1
		
		@echo "Option d'optimisation pour SCAL avec icx">>resultat/res_time_scal.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_icx_O0_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_icx_O1_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_icx_O2_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_icx_O3_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./statique_icx_Os_SCAL'>>resultat/res_time_scal.txt 2>&1

		@echo '-----------------dynamique-------------------'>>resultat/res_time_scal.txt 2>&1

		@echo "Option d'optimisation pour SCAL avec gcc">>resultat/res_time_scal.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_gcc_O0_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_gcc_O1_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_gcc_O2_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_gcc_O3_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_gcc_Os_SCAL'>>resultat/res_time_scal.txt 2>&1
		
		@echo "Option d'optimisation pour SCAL avec icx">>resultat/res_time_scal.txt 2>&1

		@echo "Option d'optimisation -O0">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_icx_O0_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O1">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_icx_O1_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O2">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_icx_O2_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -O3">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_icx_O3_SCAL'>>resultat/res_time_scal.txt 2>&1
		@echo "Option d'optimisation -Os">>resultat/res_time_scal.txt 2>&1
		bash -c 'time ./dynamique_icx_Os_SCAL'>>resultat/res_time_scal.txt 2>&1

		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_time_scal.txt 2>&1
		
test_add :
		@echo '--------------------------début exécution------------------------'>>resultat/res_test_add.txt 2>&1
		@echo '--------------------------gcc------------------------------------'>>resultat/res_test_add.txt 2>&1
		@echo "Option d'optimisation -O0 en statique">>resultat/res_test_add.txt 2>&1
		bash -c 'time ./statique_gcc_O0_ADD'>>resultat/res_test_add.txt 2>&1
		
		@echo "Option d'optimisation -O0 en dynamique">>resultat/res_test_add.txt 2>&1
		bash -c 'time ./dynamique_gcc_O0_ADD'>>resultat/res_test_add.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_test_add.txt 2>&1
		
test_mult :
		@echo '--------------------------début exécution------------------------'>>resultat/res_test_mult.txt 2>&1
		@echo '--------------------------gcc------------------------------------'>>resultat/res_test_mult.txt 2>&1
		@echo "Option d'optimisation -O0 en statique">>resultat/res_test_mult.txt 2>&1
		bash -c 'time ./statique_gcc_O0_MULT'>>resultat/res_test_mult.txt 2>&1
		
		@echo "Option d'optimisation -O0 en dynamique">>resultat/res_test_mult.txt 2>&1
		bash -c 'time ./dynamique_gcc_O0_MULT'>>resultat/res_test_mult.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_test_mult.txt 2>&1
		
test_scal :
		@echo '--------------------------début exécution------------------------'>>resultat/res_test_scal.txt 2>&1
		@echo '--------------------------gcc------------------------------------'>>resultat/res_test_scal.txt 2>&1
		@echo "Option d'optimisation -O0 en statique">>resultat/res_test_scal.txt 2>&1
		bash -c 'time ./statique_gcc_O0_SCAL'>>resultat/res_test_scal.txt 2>&1
		
		@echo "Option d'optimisation -O0 en dynamique">>resultat/res_test_scal.txt 2>&1
		bash -c 'time ./dynamique_gcc_O0_SCAL'>>resultat/res_test_scal.txt 2>&1
		@echo '--------------------------fin exécution--------------------------\n\n'>>resultat/res_test_scal.txt 2>&1
	
gprof:
		@echo '--------------------------début exécution------------------------'
		gcc -pg -O0 dynamique.c -o dynamique_gprof
		./dynamique_gprof
		gprof -b dynamique_gprof gmon.out > resultat/res.txt
		@echo '--------------------------fin exécution--------------------------'

fprofile:
		@echo '--------------------------début exécution------------------------'>>resultat/res_fprofile.txt 2>&1
		gcc dynamique.c -fprofile-generate
		./a.out
		gcc dynamique.c -fprofile-use
		@echo "avec fprofile-generate et fprofile-use">>resultat/res_fprofile.txt 2>&1
		bash -c 'time ./a.out'>>resultat/res_fprofile.txt 2>&1

		gcc dynamique.c
		./a.out
		@echo "sans fprofile-generate et fprofile-use">>resultat/res_fprofile.txt 2>&1
		bash -c 'time ./a.out'>>resultat/res_fprofile.txt 2>&1
		@echo '--------------------------début exécution------------------------\n'>>resultat/res_fprofile.txt 2>&1
clean :
		rm dynamique_*
		rm statique_*
		if [ -f dynamique_* ]; then rm dynamique_*; fi
		if [ -f statique_* ]; then rm rm statique_*; fi
		if [ -f error.log ]; then rm rm error.log; fi
		if [ -f gmon.out ]; then rm gmon.out; fi
		if [ -f *.gcda ]; then rm *.gcda; fi
		if [ -f *.profraw ]; then rm *.profraw; fi
		if [ -f a.out ]; then rm a.out; fi
