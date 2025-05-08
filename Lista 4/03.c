#include<stdio.h>
#include<math.h>

    float calcula_delta(float a, float b, float c){
        return pow(b,2) -4 * a * c;
    }
    void calcula_raiz(float a, float b, float c){
        float delta = calcula_delta(a, b, c);

        if (delta > 0)
    {
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);

        printf("Existem raizes X1 = %.2f\n", x1);
        printf("Existem raizes X2 = %.2f\n", x2);

    } 
    else if (delta == 0) 
    {
        float x1 = -b / (2 * a);

        printf("Existe uma raiz real X = %.2f\n", x1);
    } 
    else
    {
        printf("Nao existem raizes reais\n");
    }
    }
int main(){
    float a, b, c;

    printf("Digite os valores de a, b e c:\n");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        printf("Nao eh uma equacao de segundo grau.\n");
    } else {
        calcula_raiz(a, b, c);
    }

    return 0;
}
