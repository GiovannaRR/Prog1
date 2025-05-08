#include<stdio.h>

int main(){

    float salario, reajuste, novo_salario;
    int codigo = 0;

    printf("Digite um codigo:");
        scanf("%d", &codigo);

    printf("\nDigite seu salario:", &salario);
        scanf("%f", &salario);

    switch (codigo)
    {
        case 1:
            reajuste = salario * 0.10;
            novo_salario = salario + reajuste;
            printf("O valor do seu novo salario eh: %.2f", novo_salario);
            break;
        case 2:
            reajuste = salario * 0.07;
            novo_salario = salario + reajuste;
            printf("O valor do seu novo salario eh: %.2f", novo_salario);
            break;
        case 3:
            reajuste = salario * 0.12;
            novo_salario = salario + reajuste;
            printf("O valor do seu novo salario eh: %.2f", novo_salario);
            break;
        case 4:
            reajuste = salario * 0.11;
            novo_salario = salario + reajuste;
            printf("O valor do seu novo salario eh: %.2f", novo_salario);
            break;
        
        default:
            printf("Ocodigo eh invalido");
            break;
    }
    return 0;
}