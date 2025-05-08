#include<stdio.h>
#define LIN 5
#define COL 5

int main(){

    int matriz[LIN][COL];
    int i = 0, j = 0, soma = 0;
    float media = 0;

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite as posicoes [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }

    media = soma / 5;

    printf("A media eh: %.2f", media);

    return 0;
}