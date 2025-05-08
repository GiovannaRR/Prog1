#include <stdio.h>
#define LIN 5
#define COL 3
int main() {
    int matriz[LIN][COL];
    int somaLinha[5] = {0};

    printf("Digite os elementos da matriz 5x3:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            somaLinha[i] += matriz[i][j];
        }
    }

    printf("\nSoma de cada linha:\n");
    for (int i = 0; i < 5; i++) {
        printf("Linha %d: %d\n", i, somaLinha[i]);
    }

    return 0;
}
