#include<stdio.h>

int main(){

    int n1, n2, n3;

    printf("Digite 3 numeros:");
        scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 == n2 && n1 == n3)
    {
        printf("O triangulo eh equilatero");
    }
    else if (n1 == n2 || n1 == n3 || n2 == n3)
    {
        printf("O triangulo eh isoceles");
    }
    else
    {
        printf("O triangulo eh escaleno");
    }
    
    return 0;
}