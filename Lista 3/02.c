#include<stdio.h>

int main(){

    int x, y, cont = 0;

    printf("Digite um numero para X e Y:\n");
        scanf("%d %d", &x, &y);

    int inicio = x < y ? x : y;
    int fim = x > y ? x : y;

    cont = inicio;

    while (cont <= fim)
    {
        if(cont % 5 == 2 || cont % 5 == 3)
        {
            printf("%d\n",cont);
        }
        cont ++;
    }
    return 0;

}