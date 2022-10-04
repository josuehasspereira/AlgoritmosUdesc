//Josué Hass Pereira
//josue.hass@hotmail.com

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float x, y;
    printf("Plano Cartesiano: \n");
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    if (x == 0 && y == 0){
        printf("Origem");
    }else{
        if (x > 0 && y > 0){
            printf("Q1 - Superior Direito");
        }else{
            if (x < 0 && y > 0){
                printf("q2 - Superior Esquerdo");
            }else{
                if (x < 0 && y < 0){
                    printf("Q3 - Inferior Esquerdo");
                }else{
                    if (x > 0 && y < 0){
                        printf("Q4 - Inferior Direito");
                    }else{
                        if(x == 0){
                            printf("Eixo Y");
                        }else{
                            printf("Eixo X");
                        }
                    }
                }
            }
        }
    }

    return 0;
}
