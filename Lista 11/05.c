#include <stdio.h>
#include <stdlib.h>

void gravar(int vetor[], int tamanho, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%d\n", vetor[i]);
    }

    fclose(arquivo);
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    const char *nome = "vetor.txt";

    gravar(vetor, tamanho, nome);

    printf("Vetor gravado no arquivo '%s'.\n", nome);

    return 0;
}
