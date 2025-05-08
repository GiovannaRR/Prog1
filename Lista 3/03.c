#include<stdio.h>

int main(){

    int n;
    int cont = 1;
    float soma = 0;

    printf("Digite um valor para n:\n");
        scanf("%d",&n);

    while(cont <= n)
    {
        soma += 1.0 / cont;
        printf("1/%d + \n",cont);
        cont ++;
    }
    printf("Soma: %.2f\n", soma);
}