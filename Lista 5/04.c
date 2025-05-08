#include<stdio.h>
#define TAM 21

int main(){

    int numero[TAM];
    int ultimo_numero;
    int i;
    int encontrado = 0;

    for(i = 0; i < TAM; i++){
        printf("Digite 21 numeros:");
            scanf("%d", &numero[i]);
    }

    ultimo_numero = numero[TAM - 1];

    printf("O ultimo numero (%d) aparece nas seguintes posicoes: ", ultimo_numero);
    for(i = 0; i < TAM - 1; i++){

        if (numero[i] == ultimo_numero){
            printf("%d\n", i);
            encontrado = 1;
        }
    }
        if (!encontrado){
            printf("Nenhuma vez");
        }
    return 0;
}