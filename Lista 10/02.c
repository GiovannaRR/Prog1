#include <stdio.h>

void imprimirParesCrescente(int n, int atual) {

    if (atual > n) {
        return;
    }

    if (atual % 2 == 0) {
        printf("%d ", atual);
    }

    imprimirParesCrescente(n, atual + 2);
}

int main() {
    int n;
    
    printf("Digite um numero inteiro positivo par: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Por favor, digite um numero par.\n");
        return 1;
    }

    printf("Numeros pares de 0 ate %d em ordem crescente:\n", n);
    imprimirParesCrescente(n, 0);
    
    return 0;
}
