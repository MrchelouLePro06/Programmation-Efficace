all: build

build:
		gcc -O2 -fopenmp ./matrixmatrixmultiply.c -o ./matrix-gcc
		icx -O2 -qopenmp ./matrixmatrixmultiply.c -o ./matrix-icx

clean :
		if [ -f matrix-* ]; then rm matrix-*; fi
		if [ -f tmp* ]; then rm tmp*; fi
		if [ -f .R* ]; then rm .R*; fi