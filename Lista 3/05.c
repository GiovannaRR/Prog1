#include<stdio.h>

int main(){

    int n = 1, quantidade;
    int valor;
    float soma, resultado;

    printf("Qual vai ser a quantidade de elementos?");
        scanf("%d",  &quantidade);

    while(n <= quantidade){
        printf("Digite o valor:\n");
            scanf("%d", &valor);

        soma += valor;
        n++;
    }
    resultado = soma / n;

    printf("A media eh : %.2f", resultado);

    return 0;

}