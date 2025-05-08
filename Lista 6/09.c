# include<stdio.h>

int main(){

    int lin = 0, col = 0;
    int i = 0, j = 0;

    printf("Digite o tamanho de linhas da matriz:\n");
        scanf("%d", &lin);
    printf("Digite o tamanho de colunas da matriz:\n");
        scanf("%d", &col);

    int matriz[lin][col];

        for(i = 0; i < lin; i++){
            for(j = 0; j < col; j++){
                printf("Digite os elementos das posicoes [%d][%d]:", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }

    printf("A matriz transposta eh:");

    for(j = 0; j < col; j++){
        printf("\n");
        for(i = 0; i < lin; i++){
            printf("%d ", matriz[i][j]);
        }
    }
}