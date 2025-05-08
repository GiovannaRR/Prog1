#include<stdio.h>

int main(){

    int idade, cont = 0;
    float altura;

    printf("Digite sua altura e sua idade:\n");
        scanf("%f %d", &altura, &idade);

    if (altura > 1.5 && idade >= 12)
    {
        printf("Voce pode andar na Barca Viking!\n");
        cont += 1;
    }
    if (altura > 1.4 && idade >= 14)
    {
        printf("Voce pode andar no Elevator of Death!\n");
        cont += 1;
    }
    if (altura > 1.7 && idade >= 16)
    {
        printf("Voce pode andar no Final Killer!\n");
        cont += 1;
    }
    else
    {
        printf("Voce nao cumpre os requisitos para esse(s) brinquedo(s)\n");
    }

    printf("Voce pode andar em %d brinquedos, obrigada por visitar nosso parque!!", cont);
    
    
}