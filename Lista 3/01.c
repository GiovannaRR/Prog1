#include<stdio.h>

int main(){

    int inicio, fim;

    printf("Qual vai ser o cumprimento da sua lista de numeros (inicio e fim):");
        scanf("%d%d", &inicio, &fim);

    while (inicio <= fim)
    {
        if (inicio % 2 != 0)
        {
            printf("%d\n", inicio);
        }
        
        inicio++;
    }
    return 0;
}