#include <stdio.h>
#include <string.h>

void inverterString(char *str, int inicio, int fim) {

    if (inicio >= fim) {
        return;
    }

    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    inverterString(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';

    int tam = strlen(str);

    inverterString(str, 0, tam - 1);

    printf("String invertida: %s\n", str);

    return 0;
}
