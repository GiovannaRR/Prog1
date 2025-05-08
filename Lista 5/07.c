#include<stdio.h>

    int encontrar(int vet[], int tam){

        int maior = vet[0];

        for (int i = 1; i < tam; i++)
        {
            if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
        
    }
int main(){

    int n; 

    printf("Digite o tamanho do vetor:");
        scanf("%d", &n);
    
    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite os numeros: ");
            scanf("%d", &vet[i]);
    }

    int maior_valor = encontrar(vet, n);

    printf("O maior valor eh: %d\n", maior_valor);

    return 0;
}