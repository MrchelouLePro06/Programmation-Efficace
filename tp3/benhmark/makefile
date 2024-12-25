all: build

build:
		gcc -O2 -fopenmp ./matrixmatrixmultiply.c -o ./matrix-gcc
		icx -O2 -qopenmp ./matrixmatrixmultiply.c -o ./matrix-icx

clean :
		rm matrix-*
		rm .R*