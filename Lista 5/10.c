#include <stdio.h>
#define tam 20

void trocar(int vet[], int TAM) {
    int i, temp;
    
    for (i = 0; i < TAM / 2; i++) {
        temp = vet[i];
        vet[i] = vet[i + TAM / 2];
        vet[i + TAM / 2] = temp;
    }
}

int main() {
    int vetor[tam];
    int i;
    
    printf("Digite %d elementos do vetor:\n", tam);
    for (i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }
    
    trocar(vetor, tam);
    
    printf("\nVetor com os 10 primeiros elementos trocados pelos 10 ultimos:\n");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
