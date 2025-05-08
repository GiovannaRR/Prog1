#include<stdio.h>

int main(){

    int codigo = 0, quantidade;
    float valor_com_desconto, total, valor_produto, valor_final;

    printf("Digite o codigo:");
        scanf("%d", &codigo);

    printf("\nDigite a quantidade de produtos:");
        scanf("%d", &quantidade);

    switch (codigo)
    {
        case 1:
            valor_produto = 5.30;
            break;

        case 2:
            valor_produto = 6.00;
            break;

        case 3:
            valor_produto = 3.20;
            break;

        case 4:
            valor_produto = 2.50;
            break;
        
        default:
            printf("Codigo nao encontrado");
            break;
        }

    total = quantidade * valor_produto;

    if(quantidade > 15)
    {
        valor_com_desconto = total * 0.15;
    }
    else if(total >= 40.00)
    {
        valor_com_desconto = total * 0.15;
    }
    
    valor_final = total - valor_com_desconto;

    printf("O valor da sua compra sem o desconto foi de %.2f\n", total);
    printf("O valor do desconto eh %.2f\n", valor_com_desconto);
    printf("O valor da sua compra com desconto foi de:%.2f\n", valor_final);
}