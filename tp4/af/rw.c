#include <stdio.h>
#include <stdlib.h>
#define Taille 1000000
#define pas 8
#define RAND_MAX_VALUE 1000
float x, tab[Taille];
int i,j;


int main(){
	FILE *fichier = fopen("fichier.txt", "wb");
    if (fichier == NULL) {
        perror("Erreur d'ouverture du fichier");
        return 1;
    }
	for (int i = 0; i < Taille; i++) {
        float valeur = (float)rand() / RAND_MAX * RAND_MAX_VALUE;
        tab[i]=valeur;fread(&valeur, sizeof(float), 1, fichier);
    }
	
	for (i=0; i< Taille; i=i+pas) {
		x=x+tab[i];
		fwrite(&x, sizeof(float), 1, fichier);
	}
    fclose(fichier);
    printf("\n%d",getpid());
	return 0;
}

