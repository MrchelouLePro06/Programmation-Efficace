#include<stdio.h>
#include<stdlib.h>
#define N 2000
#define M 2000
#define P 2000

float **A, **B, **C;

void initialiserMatrices(){
    for(int i=0;i<N;i++){
        for(int j =0;j<N;j++){
            A[i][j]=1.;
            B[i][j]=2.;
            C[i][j]=1.5;
        }
    }
}

void multMatrice(){
    for(int i=0; i< N; i++){
        for (int j=0; j< M; j++){
        	int k;
            for (int k=0; k< P-7; k+=7){
                C[i][j] += A[i][k] * B[k][j];
		        C[i][j] += A[i][k+1] * B[k+1][j];
		        C[i][j] += A[i][k+2] * B[k+2][j];
		        C[i][j] += A[i][k+3] * B[k+3][j];
		        C[i][j] += A[i][k+4] * B[k+4][j];
		        C[i][j] += A[i][k+5] * B[k+5][j];
		        C[i][j] += A[i][k+6] * B[k+6][j];
		        C[i][j] += A[i][k+7] * B[k+7][j];
            }
            for (k; k < P; k++) {
            	C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main(){
	A=malloc(N*sizeof(float *));
	B=malloc(P*sizeof(float *));
	C=malloc(N*sizeof(float *));
	
	for(int i=0;i<N;i++){
    	A[i] = malloc(P * sizeof(float));
    	B[i] = malloc(M * sizeof(float));
    	C[i] = malloc(M * sizeof(float));
    }
    
    initialiserMatrices();
    multMatrice();
    
    for(int i=0;i<N;i++){
    	free(A[i]);
    	free(B[i]);
    	free(C[i]);
    }
    
    free(A);
    free(B);
    free(C);
	return 0;
}
