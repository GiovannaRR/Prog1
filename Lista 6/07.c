#include<stdio.h>
#include<stdlib.h>

    void diagonal(int x, int lin, int col, int matriz[lin][col]){
        int i = 0, j = col - 1;
        for(i = 0; i < lin; i ++){
            matriz[i][j] = x * matriz[i][j];
            j--;
        }

        for(i = 0; i < lin; i++){
            printf("\n");
            for(j = 0; j < col; j++){
                printf("%d ", matriz[i][j]);
            }
        }

    }
int main(){

    int lin = 0, col = 0, x = 0;
    int i = 0, j = 0;

    printf("Digite o tamanho de linhas da matriz:\n");
        scanf("%d", &lin);
    printf("Digite o tamanho de colunas da matriz:\n");
        scanf("%d", &col);
    printf("Digite o valor de x:\n");
        scanf("%d", &x);

    if(lin != col){
        exit(1);
    }
    int matriz[lin][col];

        for(i = 0; i < lin; i++){
            for(j = 0; j < col; j++){
                printf("Digite os elementos das posicoes [%d][%d]:", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    diagonal(x, lin, col, matriz);
}