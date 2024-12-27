#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

float x,y,z,t;
int i;

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
		for (i=0; i< N; i++){
		x=x+y;
		y=x+t;
		z=x+z;
		x=t+y;
		t=y+x;
		//printf("x=%f, y=%f, z=%f, t=%f",x,y,z,t);
		}
	}
	return 0;
}

