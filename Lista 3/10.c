#include <stdio.h>

int main(void){

    int numero = 0, loop = 1, soma = 0, count = 0;
    float media = 0;

    while(loop == 1){
    
    printf("Digite um numero entre 10 e 50:");
        scanf("%d", &numero);

    if(numero == 0){
        loop = 0;
    }

    if(numero >=10 && numero <= 50 && numero % 7 == 0){
        count ++;
        soma += numero;
    }

    }

    if(count > 0){
        media = soma / count;
        printf("Quantidade de numeros digitados que sao multiplos de 7:%d", count);
        printf("\nMedia dos numeros:%.2f", media);
    }
    else{
        printf("Nao ha numeros divisiveis por 7 digitados");
    }

    return 0;
}