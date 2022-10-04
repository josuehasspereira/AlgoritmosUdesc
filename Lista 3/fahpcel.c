//Josué Hass Pereira
//josue.hass@hotmail.com

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float fah, a, b, celsius;
	printf("Digite o intervalo desejado de temperatura: ");
	scanf("%f %f", &a, &b);
	for (fah = a; fah <= b; fah += 2){
		celsius = (fah - 32) * 5/9;
		printf("%.2f F = %.2f C\n", fah, celsius);
	}
	
	
	return 0;
}