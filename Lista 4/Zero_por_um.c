//Josu� Hass Pereira
//josue.hass@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(){
	int v[N], i;
	for(i = 0; i < N; i++){
		printf("Digite o %d valor: ", i + 1);
		scanf("%d", &v[i]);
	}
	for(i = 0; i < N; i++){
		printf("%d: %d\n", i, v[i]);
	}
	printf("\nVetor: ");	
	for(i = 0; i < N; i++){
		if(v[i] == 0){
			v[i] = 1;
		}
		printf("%d ", v[i]);
	}
	
	return 0;
}


