#include<stdio.h>
#define LIN 4
#define COL 5

    void Menor(int matriz[LIN][COL]){
        int lin = 0, col = 0;
        int menor = matriz[0][0];

        for(int i = 0; i < LIN; i++){
            for(int j = 0; j < COL; j++){
                if(matriz[i][j] < menor){
                    menor = matriz[i][j];
                    lin = i;
                    col = j;
                }
            }
        }
        printf("o  menor elemento eh %d ", menor);
        printf("\nA posicao eh [%d][%d]", lin, col);

    }
int main(){

    int matriz[LIN][COL];
    int i, j;

    for( i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite os elementos das posicoes [%d][%d]:", i, j);
                scanf("%d", & matriz[i][j]);
        }
    }

    Menor(matriz);
}