#include<stdio.h>
#define TAM 50
int main(){

    int vet[TAM];
    int par[TAM];
    int impar[TAM];
    int cont1 = 0, cont2 = 0, i;

    for(i = 0; i < TAM; i++){
        printf("Digite os 50 numeros do vetor:");
            scanf("%d", &vet[i]);
    }

    for(i = 0; i < TAM; i++){
        if(vet[i] % 2 == 0){
            par[cont1++] = vet[i];
        }
        else{
            impar[cont2++] = vet[i];
        }
    }

    printf("Numeros par:\n");
    for(i = 0; i < cont1; i++){
        printf("%d\n", par[i]);
    }

    printf("Numeros impar:\n");
    for(i = 0; i < cont2; i++){
        printf("%d\n", impar[i]);
    }
    return 0;
}