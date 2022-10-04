//Josué Hass Pereira
//josue.hass@hotmail.com

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float h, pesoideal;
    char sexo;
    printf("Informe o seu sexo (m ou f): ");
    scanf("%c", &sexo);
    printf("Informe sua altura (metros): ");
    scanf("%f", &h);

    switch (sexo){
        case 'm':
            pesoideal = (72.7 * h) - 58;
            printf("Seu peso ideal e de %.2f", pesoideal);
            break;
        case 'f':
            pesoideal = (62.1 * h) - 44.7;
            printf("Seu peso ideal e de %.2f", pesoideal);
            break;
        default:
            printf("Entrada invalida!");        
    }

    //ARRUMAR

    return 0;
}
