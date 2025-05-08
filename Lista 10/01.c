#include <stdio.h>

void imprimirParesDecrescente(int n) {

    if (n < 0) {
        return;
    }

    if (n % 2 == 0) {
        printf("%d ", n);
    }

    imprimirParesDecrescente(n - 2);
}

int main() {
    int n;
    
    printf("Digite um numero (inteiro positivo par): ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Por favor, digite um numero par.\n");
        return 1;
    }

    printf("Numeros pares de %d ate 0 em ordem decrescente:\n", n);
    imprimirParesDecrescente(n);
    
    return 0;
}
