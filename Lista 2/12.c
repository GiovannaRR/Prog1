#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &c);

    if (a > b && a > c) 
    { 
        printf("%d %d %d", a, b, c);
    } 
    else if (b > c && b > a) 
    { 
         printf("%d %d %d", b, c, a);
    } 
    else if (c > b && c > a) 
    { 
         printf("%d %d %d", c, b, a);
    } 


    return 0;
}
