//Josu� Hass Pereira
//josue.hass@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

//Media dos valores �mpares acima de 10 (Gera��o aleat�ria).

int main(){
	srand(time(0));
	int v[N], impar = 0, i;
	float soma = 0, media;
	for (i = 0; i < N; i++){
		v[i] = rand() % 1000 + 1;
	}
	for(i=0;i<N;i++){
		printf("%d\n", v[i]);
	}
	for(i = 0; i < N; i ++){
		if((v[i] > 10) && (v[i] % 2 != 0)){
			soma += v[i];
			impar++;
		}
	}
	media = soma / impar;
	printf("Media dos valores acima de 10 e impares e de: %.2f", media);
	
	return 0;
}
