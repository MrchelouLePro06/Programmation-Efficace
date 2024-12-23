#include<stdio.h>
#include<stdlib.h>
#define N 1432 //1432 1450 1500
#define M 1432
#define P 1432
#define T 81920000

float **A, **B, **C;
float *As, *A1, *B1, *C1;
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
	A=malloc(N*sizeof(float *));
	B=malloc(P*sizeof(float *));
	C=malloc(N*sizeof(float *));
    A1 = malloc(T*sizeof(float));
    B1 = malloc(T*sizeof(float));
    C1 = malloc(T*sizeof(float));
    As = malloc(T*sizeof(float));
    
    for(int i=0;i<N;i++){
    	A[i] = malloc(P * sizeof(float));
    	B[i] = malloc(M * sizeof(float));
    	C[i] = malloc(M * sizeof(float));
    }
    if (A==NULL){printf("erreur allocation\n");exit(1);}
    
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
    
    for(int i=0;i<N;i++){
    	free(A[i]);
    	free(B[i]);
    	free(C[i]);
    }
    
    free(A);
    free(B);
    free(C);
    free(A1);
    free(B1);
    free(C1);
    free(As);
    return 0;
}
//gcc -01 tp1.c -Wall -o matrice01.out
//time ./matrice01.out
//clang -O0 tp1.c -emit-llvm testO0.out 
