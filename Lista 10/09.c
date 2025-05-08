#include <stdio.h>

int maiorElemento(int *vet, int tam) {

    if (tam == 1) {
        return vet[0];
    }
    
    int maiorRestante = maiorElemento(vet + 1, tam - 1);
    
    if (vet[0] > maiorRestante) {
        return vet[0];
    } else {
        return maiorRestante;
    }
}

int main() {
    int vet[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int tam = sizeof(vet) / sizeof(vet[0]); 
    
    int resultado = maiorElemento(vet, tam);
    printf("O maior elemento do array e: %d\n", resultado);

    return 0;
}
