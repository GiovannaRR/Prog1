#include<stdio.h>
#include<stdlib.h>

    void LerMatriz(int **matriz, int m, int n){
        printf("Digite os elementos da matriz:\n");

        for(int i = 0; i < m; i++){
            for(int  j = 0; j < n; j++){
                printf("Elementos da matriz[%dX%d]:\n", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    void LerVetor(int *vet, int n){
        printf("Digite os elementos do vetor:\n");

        for(int i = 0; i < n; i++){
            printf("Elementos do vetor [%d]:\n", i);
            scanf("%d", &vet[i]);
        }
    }

    void Calcular(int **matriz, int *vet, int *resultado, int m, int n){

        for(int i = 0; i < m; i++){
            resultado[i] = 0;
            for(int j = 0; j < n; j++){
                resultado[i] += matriz[i][j] * vet[j];
            }
        }
    }
    void exibir(int *resultado, int m){
        printf("O valor do produto da matriz pelo vetor eh:\n");

        for(int i = 0; i < m; i++){
            printf("Resultado [%d]\n", resultado[i]);
        }
    }
int main(){

    int m, n;

    printf("Digite a ordem da matriz[m]X[n]:\n");
        scanf("%d %d", &m, &n);

    int **matriz = (int **)malloc(m * sizeof(int *));
        for(int i = 0; i < m; i++){
            matriz[i] = (int *)malloc(n* sizeof(int));
        }

    int *vet = (int *)malloc(n * sizeof(int));

    int *resultado = (int *)malloc(m * sizeof(int));

    LerMatriz(matriz, m, n);
    LerVetor(vet, n);
    Calcular(matriz, vet, resultado, m, n);
    exibir(resultado, m);

    free(matriz);
    free(vet);
    free(resultado);

    return 0;
}