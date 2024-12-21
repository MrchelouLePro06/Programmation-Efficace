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
int main(){
    int i,j,k;
    initialiserMatrices();
    #ifdef ijk //classique
    for (i=0; i< N; i++){
        for (j=0; j< M; j++){
            for (k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    #elif ikj
    for (i=0; i< N; i++){
        for (k=0; k< P; k++){
            for (j=0; j< M; j++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    #elif kij
    for (k=0; k< P; k++){
        for (i=0; i< N; i++){
            for (j=0; j< M; j++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    #elif kji
    for (k=0; k< P; k++){
        for (j=0; j< M; j++){
            for (i=0; i< N; i++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    #elif jik
    for (j=0; j< M; j++){
        for (i=0; i< N; i++){
            for (k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    #elif jki
    for (j=0; j< M; j++){
        for (k=0; k< P; k++){
            for (i=0; i< N; i++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #endif
    return 0;
}
