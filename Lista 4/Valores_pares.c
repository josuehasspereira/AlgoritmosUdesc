//Josu� Hass Pereira
//josue.hass@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20



int main(){
	srand(time(0));
	int v[N], i, cont = 0;
	for (i = 0; i < N; i++){
		v[i] = rand() % 100 + 1;

	}
	for(i = 0; i < N; i++){
		printf("%d: %d\n", i, v[i]);
	}
	for(i = 0; i < N; i++){
		if(v[i] % 2 == 0){
			cont++;
		}
	}
	printf("Quantidade de valores pares: %d", cont);
	
	
	return 0;
}
