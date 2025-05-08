#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c, x1, x2;
    float delta;
       

    printf("Digite um valor para A, B e C:");
        scanf("%f%f%f", &a, &b, &c);

    if (a == 0)
    {
        printf("Nao existe raiz");
    }

    delta = pow(b,2) -4*a*c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

        printf("Existem raizes X1 = %.2f\n", x1);
        printf("Existem raizes X2 = %.2f\n", x2);

    } 
    else if (delta == 0) 
    {
        x1 = -b / (2 * a);

        printf("Existe uma raiz real X = %.2f\n", x1);
    } 
    else
    {
        printf("Nao existem raizes reais\n");
    }
    
    return 0;
}