#include<stdio.h>
#include<stdlib.h>
#define N 1500
#define M 1500
#define P 1500

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
            for (int k=0; k< P; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main(){
    int i,j,k;
    initialiserMatrices();
    #ifdef Q1
    for (i=0; i< N; i+=3){
        for (j=0; j< M; j++){
            for (k=0; k<P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
        if (i+1 < N){
            for (j=0; j< M; j++){
                for (k=0; k<P; k++){
                    C[i+1][j] = C[i+1][j] + A[i+1][k] * B[k][j];
                }
            }
        }
        if (i+2 < N) {
            for (j=0; j< M; j++){
                for (k=0; k<P; k++){
                    C[i+2][j] = C[i+2][j] + A[i+2][k] * B[k][j];
                }
            }
        }
    }
    #elif Q2
    for (i = 0; i < N; i += 3) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < P; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            if (i + 1 < N) {
                for (k = 0; k < P; k++) {
                    C[i+1][j] = C[i+1][j] + A[i+1][k] * B[k][j];
                }
            }
            if (i + 2 < N) {
                for (k = 0; k < P; k++) {
                    C[i+2][j] = C[i+2][j] + A[i+2][k] * B[k][j];
                }
            }
        }
    }
    #else
    multMatrice();
    #endif

    printf("%f %f %f\n", C[1500][1500],B[M-1][P-1],A[16][16]);
	return 0;
}
