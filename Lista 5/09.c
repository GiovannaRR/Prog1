#include <stdio.h>

int main(){
    int tam = 0, n = 0, i = 0;
    
    printf("Tamanho do vetor:");
        scanf("%d", &tam);
        
    int vet[tam]; 

    for(n = 0; n < tam; n++){
        printf("Digite um elemento do vetor:");
            scanf("%d", &vet[n]);
    }

for(i = 0; i < tam - 1; i++){
    for(n = 0; n < tam - i - 1; n++){
        if(vet[n] > vet[n + 1]){
            int temp = vet[n];
            vet[n] = vet[n + 1];
            vet[n + 1] = temp;
        }
    }
}

    printf("vetor ordenado:");
    for(n = 0; n < tam; n++){
        printf(" %d", vet[n]);
    }
}