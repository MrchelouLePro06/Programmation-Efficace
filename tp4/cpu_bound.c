#include <stdio.h>
#include <unistd.h>
#define N 100000

float x,y,z,t;
int i;

int main(){
	for (i=0; i< N; i++){
		x=x+y;
		y=x+t;
		z=x+z;
		x=t+y;
		t=y+x;
		//printf("x=%f, y=%f, z=%f, t=%f",x,y,z,t);
	}
	printf("\n%d",getpid());
	return 0;
}

