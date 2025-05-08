#include<stdio.h>

    void multiplos(int vet[], int tam){

        printf("Numeros multiplos de sete:\n");
        for(int i = 0; i < tam; i++){
            if(vet[i] % 7 == 0){
                printf("%d\n", vet[i]);
            }
        }
    }
int main(){

    int tam;

    printf("Digite o tamanho:");
        scanf("%d", &tam);

    int vet[tam];

    for(int i = 0; i < tam; i++){
        printf("Digite os numeros:");
            scanf("%d", &vet[i]);
    }

    multiplos(vet, tam);

    return 0;
}