#include <stdio.h>
#define TAM 20

void salva(const char *nomeArquivo, int A[]) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return;
    }

    for (int i = 0; i < TAM; i++) {
        fprintf(arquivo, "%d\n", A[i]);
    }

    fclose(arquivo);
    printf("Valores do vetor A salvos no arquivo '%s'.\n", nomeArquivo);
}

void ler(const char *nomeArquivo, int B[]) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para leitura");
        return;
    }

    for (int i = 0; i < TAM; i++) {
        fscanf(arquivo, "%d", &B[i]);
    }

    fclose(arquivo);
    printf("Valores lidos do arquivo e armazenados no vetor B.\n");
}

int verifica(int A[], int B[]) {
    for (int i = 0; i < TAM; i++) {
        if (A[i] != B[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int A[TAM], B[TAM];
    const char *nomeArquivo = "vetores.txt";

    printf("Digite %d valores inteiros para o vetor A:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    salva(nomeArquivo, A);

    ler(nomeArquivo, B);

    if (verifica(A, B)) {
        printf("Os valores foram gravados e lidos corretamente.\n");
    } else {
        printf("Erro: Os valores gravados e lidos são diferentes.\n");
    }

    return 0;
}
