#include<stdio.h>

int main(){

    int n = 0;
    int i = 0;

    printf("Digite o tamanho do vetor:");
        scanf("%d", &n);

    int vet[n];

    for(i = 0; i < n; i++){
        printf("Digite os numeros:");
        scanf("%d", &vet[i]);
    }

    for(i = n - 1; i >= 0; i--){
        printf("%d\n", vet[i]);

    }
    return 0;
}