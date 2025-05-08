#include<stdio.h>

int main(){

    float soma = 0;
    int x = 1, y = 1;

    while(x <= 99 && y <= 50){

        soma += x / y;
        printf("%d/%d +\n",x,y);
        x += 2;
        y += 1;
    } 

    printf("Soma :%.2f", soma);

    return 0;
}