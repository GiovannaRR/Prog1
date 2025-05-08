#include <stdio.h>

int multiplicar(int a, int b) {

    if (b == 0) {
        return 0;
    }
    
    return a + multiplicar(a, b - 1);
}

int main() {
    int a, b;
    
    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);

    int resultado = multiplicar(a, b);
    printf("O resultado de %d * %d e: %d\n", a, b, resultado);

    return 0;
}
