#include<stdio.h>
#include<stdlib.h>
#define N 2000
#define M 2000
#define P 2000

float A[N][M], B[N][P], C[M][P];

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
        	int k=0;
            #ifdef Q1
            for (k; k< P; k+=8){
                C[i][j] += A[i][k] * B[k][j];
		        C[i][j] += A[i][k+1] * B[k+1][j];
		        C[i][j] += A[i][k+2] * B[k+2][j];
		        C[i][j] += A[i][k+3] * B[k+3][j];
		        C[i][j] += A[i][k+4] * B[k+4][j];
		        C[i][j] += A[i][k+5] * B[k+5][j];
		        C[i][j] += A[i][k+6] * B[k+6][j];
		        C[i][j] += A[i][k+7] * B[k+7][j];
            }
            #else
            for (k; k < P; k++) {
            	C[i][j] += A[i][k] * B[k][j];
            }
            #endif
        }
    }
}

int main(){
    initialiserMatrices();
    multMatrice();
	return 0;
}
