//
//  matrixmatrixmultiply.c
//  pour compiler :
//clang -O2 -Xpreprocessor -fopenmp -I$(brew --prefix libomp)/include -L$(brew --prefix libomp)/lib -lomp ./matrixmatrixmultiply.c -o matrix-clang
//  Created by Sid Touati on 07/11/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 1000
#define M 1000
#define P 1000
float A[N][M];
float B[M][P];
float C[N][P];

int main(){
    int i,j,k;
    
#pragma omp parallel for
for (i=0; i< N; i++)
for (j=0; j< M; j++)
    A[i][j]=(float) rand();
    

#pragma omp parallel for
for (i=0; i< M; i++)
for (j=0; j< P; j++)
        B[i][j]=(float) rand();
    
#pragma omp parallel for
for (i=0; i< N; i++)
for (j=0; j< P; j++)
        C[i][j]=(float) rand();

#pragma omp parallel for
for (i=0; i< N; i++){
     for (j=0; j< M; j++){
           for (k=0; k< P; k++){
               C[i][j] = C[i][j]  + A[i][k] * B[k][j];
} }
}


 printf("Number of threads=%d \n %f\n",omp_get_max_threads(), C[N-1][P-1]);
    return(0);
}
