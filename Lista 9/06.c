#include <stdio.h>
#include <stdlib.h>

int contarEspacos(const char *str) {
    int count = 0;
    while (*str) { 
        if (*str == ' ') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char *string = NULL;
    size_t tamanho = 0;

    printf("Digite uma string:\n");
    getline(&string, &tamanho, stdin);

    int quantidadeEspacos = contarEspacos(string);
    printf("Quantidade de espacos em branco: %d\n", quantidadeEspacos);

    free(string);

    return 0;
}
