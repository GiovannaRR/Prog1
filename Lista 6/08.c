#include<stdio.h>
#include<stdlib.h>

    void soma(int lin, int col, int matriz[lin][col]){
        int i = 0, j = 0;
        int soma = 0;
        
        for(i = 0; i < lin; i++){
            for(j = 0; j < col; j++){
                if(i != j && i + j != lin - 1){
                    soma += matriz[i][j];
                }
            }
        }
        printf("\nSoma dos elementos nao pertencentes das diagonais principal e secundaria: %d", soma);
    }
int main(){

    int lin = 0, col = 0;
    int i = 0, j = 0;

    printf("Digite o tamanho de linhas da matriz:\n");
        scanf("%d", &lin);
    printf("Digite o tamanho de colunas da matriz:\n");
        scanf("%d", &col);

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
    soma(lin, col, matriz);
}