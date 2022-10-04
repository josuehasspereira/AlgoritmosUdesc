//Josué Hass Pereira
//josue.hass@hotmail.com

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	int n;
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d", &n);
	int v[n], i, vInv[n];
	for(i = 0; i < n; i++){
		printf("Digite o %d elemento: ", i + 1);
		scanf("%d", &v[i]);
	}
	printf("Vetor Normal: ");
	for(i = 0; i < n; i++){
		printf("%3d", v[i]);
	}
	
	for(i = 0; i < n; i++){
		vInv[i] = v[(n - 1) - i];
	}
	printf("\nVetor Invertido: ");
	for(i = 0; i < n; i++){
		printf("%3d", vInv[i]);
	}
	
	return 0; 
}
