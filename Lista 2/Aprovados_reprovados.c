//Josué Hass Pereira
//josue.hass@hotmail.com

#include<stdio.h>

int main(int argc, char const *argv[])
{
	float media = 0, n, exame, novMedia, soma;  
	int i, qnt;
	
	printf("Digite a quantidade de notas: ");
	scanf("%i", &qnt);
	
	for(i=1; i<= qnt; i++){
		printf("Digite a %i nota: ", i);
		scanf("%f", &n);	
		soma += n; 
	}
	media = soma / qnt;
	
    if (media >= 7){
        printf("Parabens! Aluno aprovado com %.2f de media!", media);
    }else{
    	printf("Infelizmente voce ficou em exame!\n");
        printf("Digite a nota do exame: ");
        scanf("%f", &exame);
        novMedia = (media + exame)/2;
        if (novMedia >= 5){
            printf("Aluno aprovado com exame com %.2f de media!", novMedia);
        }else{
            printf("Aluno reprovado com %.2f de media.", novMedia);
        }
    }

    return 0;
}
