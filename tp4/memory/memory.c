#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define Taille 1000000
#define pas 8 
float x, tab[Taille];
int i,j;

int main(){
    printf("\n%d\n",getpid());
    while(1>0){
        for (i = 0; i < Taille; i++) {
            tab[i] = (float)rand();
        }

        for (i = 0; i < Taille; i = i + pas) {
            x = x + tab[i];
        }
    }
	return 0;
}
