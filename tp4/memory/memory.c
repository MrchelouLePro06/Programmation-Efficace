#include <stdio.h>
#include <stdlib.h>
#define Taille 1000000
#define RAND_MAX_VALUE 1000
#define pas 8 
float x, tab[Taille];
int i,j;

int main(){

	for (i = 0; i < Taille; i++) {
        tab[i] = (float)rand() / (float)RAND_MAX * RAND_MAX_VALUE;
    }

	for (i = 0; i < Taille; i = i + pas) {
        x = x + tab[i];
    }
    
	printf("\n%d",getpid());
	return 0;
}
