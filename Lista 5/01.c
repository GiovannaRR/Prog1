#include <stdio.h>

void copia(int vet[],int tam){
    int cont = 0;
    int cop = vet[tam - 1];

    for(int n = 0; n < tam; n++)
    if(cop == vet[n]){
        cont++;
    }
    printf("O ultimo numero apareceu %d vezes.", cont);
}

int main(void){
    int n = 0, tam;
    
    printf("Defina o tamanho da sequencia:");
    scanf("%d", &tam);
    
    int vet[tam];
    
    for(n = 0; n < tam; n ++){
    printf("Digite uma sequencia de numeros:");
        scanf("%d", &vet[n]);
    }
    copia(vet, tam);
    return 0;
}