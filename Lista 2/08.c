#include<stdio.h>

int main(){

    int x, y, codigo = 0;
    float media, produto, divisao;

    printf("Digite um codigo:");
        scanf("%d", &codigo);

    printf("\nDigite um valor para x e y:");
        scanf("%d %d", &x, &y);

    switch (codigo)
    {
        case 1:
            media = (x+y)/2;
            printf("A media aritimetica de x e y eh :%.2f", media);
            break;
        
        case 2:
            if (x > y)
            {
                printf("X eh maior que y");
            }
            else if (y > x)
            {
                printf("Y eh maior que x");
            }
            break;

        case 3:
            produto = x * y;
            printf("O produto de x e y eh: %.2f", produto);
            break;
        
        case 4:
            divisao = x/y;
            printf("O resultado da divisao de x e y eh: %.2f", divisao);
            break;

        default: 
            printf("O codigo eh invalido");
            break;
    }
    return 0;
}