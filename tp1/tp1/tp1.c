#include<stdio.h>
#include<stdlib.h>
#define N 1000
#define M 1000
#define P 1000

float **A, **B, **C, **A2, **A1;
float *As;
float s;

void initialiserMatrices(){
    for(int i=0;i<N;i++){
    	As[i]=3.14;
        for(int j =0;j<N;j++){
            A[i][j]=1.;
            B[i][j]=2.;
            C[i][j]=1.5;
            A1[i][j]=3.9;
            A2[i][j]=0.5;
        }
    }
}

void multMatrice(){
    for(int i=0; i< N; i++){
        for (int j=0; j< M; j++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            //printf("%d",C[i][j]);
        }
    }
}

void add() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A1[i][j] += A2[i][j];
        }
    }
}

void mult_scalaire(){
	for(int i=0;i<N;i++){
		As[i]=As[i]*s;
	}
}

int main(){
	s = 1.5;
	A=malloc(N*sizeof(float *));
	B=malloc(P*sizeof(float *));
	C=malloc(N*sizeof(float *));
    A1 = malloc(N*sizeof(float *));
    A2 = malloc(N*sizeof(float *));
    As = malloc(N*sizeof(float));
    
    for(int i=0;i<N;i++){
    	A[i] = malloc(P * sizeof(float));
    	B[i] = malloc(M * sizeof(float));
    	C[i] = malloc(M * sizeof(float));
        A1[i]=malloc(N*sizeof(float));
        A2[i]=malloc(N*sizeof(float));
    }
    if (A==NULL){printf("erreur allocation\n");exit(1);}
    initialiserMatrices();
    multMatrice();
    add();
    mult_scalaire();
    
    for(int i=0;i<N;i++){
    	free(A[i]);
    	free(B[i]);
    	free(C[i]);
        free(A1[i]);
        free(A2[i]);
    }
    
    free(A);
    free(B);
    free(C);
    free(A1);
    free(A2);
    free(As);
    return 0;
}
//gcc -01 tp1.c -Wall -o matrice01.out
//time ./matrice01.out
//clang -O0 tp1.c -emit-llvm testO0.out 
