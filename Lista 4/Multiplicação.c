//Josué Hass Pereira
//josue.hass@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10


int main(){
	srand(time(0));
	int resultante[N], v[N], v2[N], i;
	//Vetor A.
	for (i = 0; i < N; i++){
		v[i] = rand() % 100 + 1;
	}
	printf("Vetor A: ");
	for(i = 0; i < N; i++){
		printf("%d ", v[i]);
	}
	//Vetor B
	printf("\nVetor B: ");
	for(i = 0; i < N; i++){
		v2[i] = rand() % 100 + 1;
	}
	for(i = 0; i < N; i++){
		printf("%d ", v2[i]);
	}

	printf("\nVetor Resultante: ");
	for(i = 0; i < N; i++){
		resultante[i] = v[i] * v2[i];
		printf("%d ", resultante[i]);
	}
	
	return 0;
}
