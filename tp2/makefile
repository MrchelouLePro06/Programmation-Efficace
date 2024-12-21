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

		gcc -O2 -D L1 -D Q1 tp2_tiling.c -o tp2_O2_tiling_Q1_L1
		gcc -O2 -D L2 -D Q1 tp2_tiling.c -o tp2_O2_tiling_Q1_L2
		gcc -O2 -D L3 -D Q1 tp2_tiling.c -o tp2_O2_tiling_Q1_l3

		gcc -O2 -D L1 -D ikj tp2_tiling.c -o tp2_O2_tiling_Q1_ikj_L1
		gcc -O2 -D L2 -D ikj tp2_tiling.c -o tp2_O2_tiling_Q1_ikj_L2
		gcc -O2 -D L3 -D ikj tp2_tiling.c -o tp2_O2_tiling_Q1_ikj_L3

		gcc -O2 -D L1 -D kij tp2_tiling.c -o tp2_O2_tiling_Q1_kij_L1
		gcc -O2 -D L2 -D kij tp2_tiling.c -o tp2_O2_tiling_Q1_kij_L2
		gcc -O2 -D L3 -D kij tp2_tiling.c -o tp2_O2_tiling_Q1_kij_L3

		gcc -O2 -D L3 -floop-block tp2_tiling.c -o tp2_O2_tiling_fb
		gcc -O2 -D L3 -floop-block -floop-interchange tp2_tiling.c -o tp2_O2_tiling_fb_fi

unrolling :
		bash -c 'time ./tp2_O2_unrolling'
		bash -c 'time ./tp2_O2_unrolling_Q1'
		bash -c 'time ./tp2_O2_fl'

fusion :
		bash -c 'time ./tp2_O0_fusion'
		bash -c 'time ./tp2_O0_fusion_Q1'
		bash -c 'time ./tp2_O0_fusion_Q2'

interchange :
		bash -c 'time ./tp2_O2_interchange_ijk'
		bash -c 'time ./tp2_O2_interchange_ikj'
		bash -c 'time ./tp2_O2_interchange_kij'
		bash -c 'time ./tp2_O2_interchange_kji'
		bash -c 'time ./tp2_O2_interchange_jik'
		bash -c 'time ./tp2_O2_interchange_jki'

		bash -c 'time ./tp2_O2_interchange_fi'

tiling :
		bash -c 'time ./tp2_O2_tiling_Q1_L1'
		bash -c 'time ./tp2_O2_tiling_Q1_L2'
		bash -c 'time ./tp2_O2_tiling_Q1_l3'

		bash -c 'time ./tp2_O2_tiling_Q1_ikj_L1'
		bash -c 'time ./tp2_O2_tiling_Q1_ikj_L2'
		bash -c 'time ./tp2_O2_tiling_Q1_ikj_L3'

		bash -c 'time ./tp2_O2_tiling_Q1_kij_L1'
		bash -c 'time ./tp2_O2_tiling_Q1_kij_L2'
		bash -c 'time ./tp2_O2_tiling_Q1_kij_L3'
		bash -c 'time ./tp2_O2_tiling_fb'
		bash -c 'time ./tp2_O2_tiling_fb_fi'
clean :
		rm tp2_O2*
