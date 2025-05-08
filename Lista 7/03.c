#include<stdio.h>
#define MAX 51

    void num_presente(int *ptr, int tam){

        for(int i = 0; i < tam - 1; i++){
            if(*(ptr+i) == *(ptr+tam-1)){
                printf("os numeros iguais sao encontrados na posicao:%d\n", i);
            }
        }
    }
int main(){

    int vet[MAX];

    printf("Digite os numeros para o vetor:");
    for(int i = 0; i < MAX; i++){
        scanf("%d", &vet[i]);
    }

    num_presente(vet, MAX);
}