#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define Taille 1000000
#define pas 8 
float x, tab[Taille];
int i,j;

int main(int argc, char *argv[]){
    if (argc != 2) {
        printf("Usage: %s <durée_en_secondes>\n", argv[0]);
        return 1;
    }
    int duration = atoi(argv[1]);
    if (duration <= 0) {
        printf("necessite temps (en secondes).\n");
        return 1;
    }
    printf("Debut du programme");
    printf("\n%d\n",getpid());
    printf("Lancement du programme");
    time_t start_time = time(NULL);

    while (1){
        if (difftime(time(NULL), start_time) >= duration) {
            printf("Temps écoulé de %d secondes. Arrêt du programme.\n", duration);
            return 0;
        }
        for (i = 0; i < Taille; i++) {
            tab[i] = (float)rand();
        }

        for (i = 0; i < Taille; i = i + pas) {
            x = x + tab[i];
        }
    }
	return 0;
}
