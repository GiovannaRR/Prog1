#include<stdio.h>
#define LIN 5
#define COL 3

int main(){

    int matriz[LIN][COL];
    int vet[15] = {0};
    int cont = 0;

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("Digite os elementos das posicoes [%d][%d]:", i, j);
                scanf("%d", & matriz[i][j]);
        }
    }

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(matriz[i][j] % 3 == 0){
                vet[cont] = matriz[i][j];
                cont++;
            }
        }
    }

    printf("Os elementos multiplos de 3 sao:\n");
    for(int i = 0; i < cont; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}