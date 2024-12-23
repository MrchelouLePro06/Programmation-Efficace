#include<stdio.h>
#include<stdlib.h>
#define N 1432 //1432 1450 1500
#define M 1432
#define P 1432
#define T 81920000

float A[N][P], B[P][M], C[N][M];
float As[T], A1[T], B1[T], C1[T];
float s;

void initialiserMatrices(){
    for(int i=0;i<N;i++){
        for(int j =0;j<N;j++){
            A[i][j]=1.;
            B[i][j]=2.;
            C[i][j]=1.5;
        }
    }
    for(int i=0;i<T;i++){
    	As[i]=3.14;
    	A1[i]=6.8;
    	B1[i]=1.6;
    	C1[i]=0;
    }
}

void multMatrice(){
	freopen("error.log", "w", stderr);
    for(int i=0; i< N; i++){
        for (int j=0; j< M; j++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            fprintf(stderr,"%f",C[i][j]);
        }
    }
    fclose(stderr);
}

void add() {
	freopen("error.log", "w", stderr);
    for (int i = 0; i < N; i++) {
        C1[i]=A1[i]+B1[i];
        fprintf(stderr,"%f",C1[i]);
    }
    fclose(stderr);
}

void mult_scalaire(){
	freopen("error.log", "w", stderr);
	for(int i=0;i<N;i++){
		As[i]=As[i]*s;
		fprintf(stderr,"%f",As[i]);
	}
	fclose(stderr);
}

int main(){
	s = 1.5;
	    
    initialiserMatrices();
    #ifdef MULT
    multMatrice();
    #elif ADD
    add();
    #elif SCAL
    mult_scalaire();
    #else
    multMatrice();
    add();
    mult_scalaire();
    #endif
    return 0;
}
//gcc -01 tp1.c -Wall -o matrice01.out
//time ./matrice01.out
//clang -O0 tp1.c -emit-llvm testO0.out 
