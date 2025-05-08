#include <stdio.h>
#include <stdlib.h>

void encontrarDivisores(int numero, int **divisores, int *quantidade) {
    *quantidade = 0; 

    *divisores = (int *)malloc(0 * sizeof(int));

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            *divisores = realloc(*divisores, (*quantidade + 1) * sizeof(int));
            (*divisores)[*quantidade] = i;
            (*quantidade)++;
        }
    }
}

void exibirDivisores(int *divisores, int quantidade) {
    printf("Divisores encontrados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", divisores[i]);
    }
    printf("\nQuantidade de divisores: %d\n", quantidade);
}

int main() {
    int numero;
    int *divisores = NULL;
    int quantidade = 0;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    encontrarDivisores(numero, &divisores, &quantidade);
    exibirDivisores(divisores, quantidade);

    free(divisores);

    return 0;
}
