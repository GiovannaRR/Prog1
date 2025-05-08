#include <stdio.h>
#include <stdlib.h>
#define TAM 50

void gravar(int numeros[], int tamanho, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "wb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    fwrite(numeros, sizeof(int), tamanho, arquivo);
    fclose(arquivo);
}

int ler(const char *nomeArquivo, int tamanho) {
    FILE *arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return -1;
    }

    int numeros[tamanho];
    int soma = 0;

    fread(numeros, sizeof(int), tamanho, arquivo);

    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }

    fclose(arquivo);

    return soma;
}

int main() {
    int numeros[TAM];
    const char *nome = "numeros.bin";

    printf("Digite 50 numeros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    gravar(numeros, TAM, nome);

    int soma = ler(nome, TAM);

    if (soma != -1) {
        printf("A soma dos numeros e: %d\n", soma);
    }

    return 0;
}
