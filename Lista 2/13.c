#include<stdio.h>

int main(){

    float salario, saldo;

    printf("Digite o valor do seu salario:\n");
        scanf("%f", &salario);

    if(salario > 400)
    {
        saldo = salario * 0.30;
        printf("O saldo eh de %.2f", saldo);
    }
    else if(salario > 300 && salario <= 400)
    {
        saldo = salario * 0.25;
        printf("O saldo eh de %.2f", saldo);
    }
    else if(salario > 200 && salario <= 300)
    {
        saldo = salario * 0.20;
        printf("O saldo eh de %.2f", saldo);
    }
    else if(salario <= 200)
    {
        saldo = salario * 0.10;
        printf("O saldo eh de %.2f", saldo);
    }



    return 0;
}