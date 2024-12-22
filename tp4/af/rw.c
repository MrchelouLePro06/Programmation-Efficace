#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define Taille 1000000
#define pas 8
float x, tab[Taille];
int i,j;


int main(){
    printf("\n%d\n",getpid());
    while (1>0){
        FILE *fichier = fopen("fichier.txt", "wb");
        if (fichier == NULL) {
            perror("Erreur d'ouverture du fichier");
            return 1;
        }
        for (int i = 0; i < Taille; i++) {
            float valeur = (float)rand();
            tab[i]=valeur;fread(&valeur, sizeof(float), 1, fichier);
        }
        
        for (i=0; i< Taille; i=i+pas) {
            x=x+tab[i];
            fwrite(&x, sizeof(float), 1, fichier);
        }
        fclose(fichier);
    }
	return 0;
}

