#include <stdio.h>
#include <stdlib.h>

void soma(int lin, int col, int matriz[lin][col]){
    int soma = 0;
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if (i < j){
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma dos elementos acima da diagonal principal: %d\n", soma);
}

int main(){
    int linha = 0, coluna = 0;

    printf("Digite as dimensoes da matriz (quadrada): ");
    scanf("%d %d", &linha, &coluna);

    if(linha != coluna){
        printf("A matriz precisa ser quadrada!\n");
        exit(1);
    }

    int matriz[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    soma(linha, coluna, matriz);

    return 0;
}
