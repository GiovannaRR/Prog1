#include<stdio.h>

int main(){

    int numero = 0;
    int i = 0;

    printf("Digite um numero para sua tabuada:\n");
        scanf("%d", &numero);

    while(i <= 10){

        printf("%d x %d = %d\n",numero, i, numero * i);
        i++;
    }
    return 0;
}