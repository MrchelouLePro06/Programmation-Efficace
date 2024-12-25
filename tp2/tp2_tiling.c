#include<stdio.h>
#include<stdlib.h>

#ifdef L1
#define BLOC 52 
#elif L2 
#define BLOC 147 
#elif L3 
#define BLOC 1182
#endif

#define N 1500
#define M 1500
#define P 1500

float A[N][M], B[N][P], C[M][P];

int min(int a, int b){
    if (a < b){return a;}
    else{return b;}
}

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
    int i0,j0,k0, i,j ,k;

    #ifdef ijk
    for (i0 = 0; i0 < N; i0 += BLOC)
        for (j0 = 0; j0 < M; j0 += BLOC)
            for (k0 = 0; k0 < P; k0 += BLOC)
                for (i = i0; i < min(i0 + BLOC, N); i++)
                    for (j = j0; j < min(j0 + BLOC, M); j++)
                        for (k = k0; k < min(k0 + BLOC, P); k++)
                            C[i][j] += A[i][k] * B[k][j];

    #elif ikj
    for (i0 = 0; i0 < N; i0 += BLOC)
        for (k0 = 0; k0 < P; k0 += BLOC)
            for (j0 = 0; j0 < M; j0 += BLOC)
                for (i = i0; i < min(i0 + BLOC, N); i++)
                    for (k = k0; k < min(k0 + BLOC, P); k++)
                        for (j = j0; j < min(j0 + BLOC, M); j++)
                            C[i][j] += A[i][k] * B[k][j];

    #elif jik
    for (i0 = 0; i0 < N; i0 += BLOC)
        for (j0 = 0; j0 < M; j0 += BLOC)
            for (k0 = 0; k0 < P; k0 += BLOC)
                for (j = j0; j < min(j0 + BLOC, M); j++)
                    for (i = i0; i < min(i0 + BLOC, N); i++)
                        for (k = k0; k < min(k0 + BLOC, P); k++)
                            C[i][j] += A[i][k] * B[k][j];

    #elif jki
    for (i0 = 0; i0 < N; i0 += BLOC)
        for (j0 = 0; j0 < M; j0 += BLOC)
            for (k0 = 0; k0 < P; k0 += BLOC)
                for (j = j0; j < min(j0 + BLOC, M); j++)
                    for (k = k0; k < min(k0 + BLOC, P); k++)
                        for (i = i0; i < min(i0 + BLOC, N); i++)
                            C[i][j] += A[i][k] * B[k][j];

    #elif kij
    for (i0 = 0; i0 < N; i0 += BLOC)
        for (k0 = 0; k0 < P; k0 += BLOC)
            for (j0 = 0; j0 < M; j0 += BLOC)
                for (i = i0; i < min(i0 + BLOC, N); i++)
                    for (k = k0; k < min(k0 + BLOC, P); k++)
                        for (j = j0; j < min(j0 + BLOC, M); j++)
                            C[i][j] += A[i][k] * B[k][j];

    #elif kji
    for (i0 = 0; i0 < N; i0 += BLOC)
        for (j0 = 0; j0 < M; j0 += BLOC)
            for (k0 = 0; k0 < P; k0 += BLOC)
                for (k = k0; k < min(k0 + BLOC, P); k++)
                    for (j = j0; j < min(j0 + BLOC, M); j++)
                        for (i = i0; i < min(i0 + BLOC, N); i++)
                            C[i][j] += A[i][k] * B[k][j];
    #else
    for (i=0; i< N; i++){
        for (j=0; j< M; j++){
            for (k=0; k<P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #endif
    return 0;
}