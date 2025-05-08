#include <stdio.h>

void decimalParaBinario(int n) {

    if (n == 0) {
        return;
    }

    decimalParaBinario(n / 2);

    printf("%d", n % 2);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O numero 0 em binario e: 0\n");
    } else {
        printf("O numero %d em binario e: ", n);
        decimalParaBinario(n);
        printf("\n");
    }

    return 0;
}
