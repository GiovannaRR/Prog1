#include<stdio.h>
#include<stdlib.h>

    void lerMatriz(int **matriz, int n){
        printf("Digite os elementos da matriz:\n");
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("Elemento [%d]X[%d]", i, j);
                    scanf("%d", &matriz[i][j]);
            }
        }
    }

    void copiar(int **matriz, int *vet, int n){
        
        for(int i = 0; i < n; i++){
            vet[i] = matriz[i][i]; 
        }
    }

    void exibir(int *vet, int n){
        printf("Os elementos da diagonal principal sao:\n");
        for(int i = 0; i < n; i++){
            printf("%d\n", vet[i]);
        }
    }
int main(){

    int n = 0;

    printf("Digite a ordem da matriz (quadrada):\n");
        scanf("%d", &n);

    int **matriz = (int **)malloc(n * sizeof(int*));
        for(int i = 0; i < n; i++){
            matriz[i] = (int *)malloc(n * sizeof(int));
        }

    int *vet = (int *)malloc(n * sizeof(int));

    lerMatriz(matriz, n);
    copiar(matriz, vet, n);
    exibir(vet, n);

    free(matriz);
    free(vet);

    return 0;
}