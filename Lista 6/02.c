#include <stdio.h>
#define LIN 3
#define COL 5

int main() {
    
    int matriz[LIN][COL];
    int vet[5] = {0,0,0,0,0};
    int i = 0, j = 0 ;

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite os elementos das posicoes [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++){
                vet[j] += matriz[i][j];
            }
    }

    printf("A soma dos elementos da coluna eh:\n");
    for(j = 0; j < COL; j++){
        printf("%d ", vet[j]);
    }

    return 0;
}