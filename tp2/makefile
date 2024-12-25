tp2 :
		gcc -O2 tp2_unrolling.c -o tp2_O2_unrolling
		gcc -O2 -D Q1 tp2_unrolling.c -o tp2_O2_unrolling_Q1
		gcc -O2 tp2_unrolling.c -funroll-loops -o tp2_O2_fl
		
		gcc tp2_fusion.c -o tp2_O0_fusion
		gcc -D Q1 tp2_fusion.c -o tp2_O0_fusion_Q1
		gcc -D Q2 tp2_fusion.c -o tp2_O0_fusion_Q2

		gcc -O2 -floop-interchange tp2_interchange.c -o tp2_O2_interchange_fi
		gcc -O2 -D ijk tp2_interchange.c -o tp2_O2_interchange_ijk
		gcc -O2 -D ikj tp2_interchange.c -o tp2_O2_interchange_ikj
		gcc -O2 -D kij tp2_interchange.c -o tp2_O2_interchange_kij
		gcc -O2 -D kji tp2_interchange.c -o tp2_O2_interchange_kji
		gcc -O2 -D jik tp2_interchange.c -o tp2_O2_interchange_jik
		gcc -O2 -D jki tp2_interchange.c -o tp2_O2_interchange_jki

		bash -c './compilertiling.sh'
unrolling :
		@echo "--------------début exécution----------------" >>res/unrolling.txt 2>&1
		@echo "tp2_O2_unrolling">>res/unrolling.txt 2>&1
		bash -c 'time ./tp2_O2_unrolling' >>res/unrolling.txt 2>&1

		@echo "tp2_O2_unrolling_Q1">>res/unrolling.txt 2>&1
		bash -c 'time ./tp2_O2_unrolling_Q1'>>res/unrolling.txt 2>&1

		@echo "tp2_O2_fl">>res/unrolling.txt 2>&1
		bash -c 'time ./tp2_O2_fl'>>res/unrolling.txt 2>&1
		@echo "--------------fin exécution----------------\n" >>res/unrolling.txt 2>&1

fusion :
		@echo "--------------début exécution----------------" >>res/fusion.txt 2>&1
		@echo "tp2_O0_fusion">>res/fusion.txt 2>&1
		bash -c 'time ./tp2_O0_fusion'>>res/fusion.txt 2>&1
		
		@echo "tp2_O0_fusion_Q1">>res/fusion.txt 2>&1
		bash -c 'time ./tp2_O0_fusion_Q1'>>res/fusion.txt 2>&1

		@echo "tp2_O0_fusion_Q2">>res/fusion.txt 2>&1
		bash -c 'time ./tp2_O0_fusion_Q2'>>res/fusion.txt 2>&1
		@echo "--------------fin exécution----------------\n" >>res/fusion.txt 2>&1

interchange :
		@echo "--------------début exécution----------------">>res/interchange.txt 2>&1
		@echo "ijk">>res/interchange.txt 2>&1
		bash -c 'time ./tp2_O2_interchange_ijk'>>res/interchange.txt 2>&1

		@echo "ikj">>res/interchange.txt 2>&1
		bash -c 'time ./tp2_O2_interchange_ikj'>>res/interchange.txt 2>&1

		@echo "kij">>res/interchange.txt 2>&1
		bash -c 'time ./tp2_O2_interchange_kij'>>res/interchange.txt 2>&1

		@echo "kji">>res/interchange.txt 2>&1
		bash -c 'time ./tp2_O2_interchange_kji'>>res/interchange.txt 2>&1

		@echo "jik">>res/interchange.txt 2>&1
		bash -c 'time ./tp2_O2_interchange_jik'>>res/interchange.txt 2>&1

		@echo "jki">>res/interchange.txt 2>&1		
		bash -c 'time ./tp2_O2_interchange_jki'>>res/interchange.txt 2>&1

		@echo "tp2_O2_interchange_fi">>res/interchange.txt 2>&1
		bash -c 'time ./tp2_O2_interchange_fi'>>res/interchange.txt 2>&1
		@echo "--------------fin exécution----------------\n">>res/interchange.txt 2>&1
tiling :
		@echo "--------------début exécution----------------">>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_L3'>>res/tiling.txt 2>&1

		@echo "tp2_O2_tiling_ijk_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_ijk_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_ijk_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_ijk_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_ijk_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_ijk_L3'>>res/tiling.txt 2>&1

		@echo "tp2_O2_tiling_ikj_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_ikj_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_ikj_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_ikj_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_ikj_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_ikj_L3'>>res/tiling.txt 2>&1

		@echo "tp2_O2_tiling_kij_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_kij_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_kij_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_kij_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_kij_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_kij_L3'>>res/tiling.txt 2>&1

		@echo "tp2_O2_tiling_jik_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_jik_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_jik_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_jik_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_jik_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_jik_L3'>>res/tiling.txt 2>&1

		@echo "tp2_O2_tiling_jki_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_jki_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_jki_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_jki_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_jki_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_jki_L3'>>res/tiling.txt 2>&1

		@echo "tp2_O2_tiling_kji_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_kji_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_kji_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_kji_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_kji_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_kji_L3'>>res/tiling.txt 2>&1

		@echo "tp2_O2_tiling_fb_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_fb_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_fb_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_fb_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_fb_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_fb_L3'>>res/tiling.txt 2>&1

		@echo "tp2_O2_tiling_fb_fi_L1">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_fb_fi_L1'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_fb_fi_L2">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_fb_fi_L2'>>res/tiling.txt 2>&1
		@echo "tp2_O2_tiling_fb_fi_L3">>res/tiling.txt 2>&1
		bash -c 'time ./tp2_O2_tiling_fb_fi_L3'>>res/tiling.txt 2>&1
		@echo "--------------fin exécution----------------\n">>res/tiling.txt 2>&1
clean :
		rm tp2_O*
