#include <stdio.h>
#include <stdlib.h>

void gravar(int matriz[][3], int linhas, int colunas, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]); 
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
}

int main() {

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int linhas = 3;
    int colunas = 3;

    const char *nome = "matriz.txt";

    gravar(matriz, linhas, colunas, nome);

    printf("Matriz gravada no arquivo '%s'.\n", nome);

    return 0;
}
