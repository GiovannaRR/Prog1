#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ePalindromo(char str[], int inicio, int fim) {

    if (inicio >= fim) {
        return true;
    }

    if (str[inicio] != str[fim]) {
        return false;
    }

    return ePalindromo(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    scanf("%s", str);

    int tamanho = strlen(str);

    if (ePalindromo(str, 0, tamanho - 1)) {
        printf("A palavra '%s' e um palindromo.\n", str);
    } else {
        printf("A palavra '%s' nao e um palindromo.\n", str);
    }

    return 0;
}
