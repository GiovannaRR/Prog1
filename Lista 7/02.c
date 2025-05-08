#include<stdio.h>

    void achar(int *vet, int tamanho, int *maior, int *menor){

        *maior = vet[0];
        *menor = vet[0];

        for(int i = 0; i < tamanho; i++){
            if(vet[i] > *maior){
                *maior = vet[i];
            }
            if(vet[i] < *maior){
                *menor = vet[i];
            }
            if(vet[i] > *menor){
                *maior = vet[i];
            }
            if(vet[i] < *menor){
                *menor = vet[i];
            }
        }
    }
int main(){

    int tamanho, menor, maior;

    printf("Digite o tamanho do vetor:");
        scanf("%d", &tamanho);

    int vet[tamanho];

    printf("Digite os numeros do vetor:");
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vet[i]);
    }

    achar(vet, tamanho, &maior, &menor);

    printf("O maior numero do vetor eh:%d\n", maior);
    printf("O menor numero do vetor eh:%d\n", menor);
}