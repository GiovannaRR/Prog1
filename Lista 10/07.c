#include <stdio.h>

int contarDigitos(int n) {

    if (n < 10) {
        return 1;
    }
    
    return 1 + contarDigitos(n / 10);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        int resultado = contarDigitos(n);
        printf("O numero %d tem %d digitos.\n", n, resultado);
    }

    return 0;
}
