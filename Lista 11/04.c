#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo1, *arquivo2, *arquivo3;
    char NomeArquivo1[255], NomeArquivo2[255], NomeArquivo3[255];
    char linha[255];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", NomeArquivo1);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", NomeArquivo2);
    printf("Digite o nome do terceiro arquivo: ");
    scanf("%s", NomeArquivo3);

    arquivo1 = fopen(NomeArquivo1, "r");
    if (arquivo1 == NULL) {
        perror("Erro ao abrir o primeiro arquivo");
        return 1;
    }

    arquivo2 = fopen(NomeArquivo2, "r");
    if (arquivo2 == NULL) {
        perror("Erro ao abrir o segundo arquivo");
        fclose(arquivo1);
        return 1;
    }

    arquivo3 = fopen(NomeArquivo3, "w");
    if (arquivo3 == NULL) {
        perror("Erro ao abrir o terceiro arquivo");
        fclose(arquivo1);
        fclose(arquivo2);
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo1)) {
        fputs(linha, arquivo3);
    }

    while (fgets(linha, sizeof(linha), arquivo2)) {
        fputs(linha, arquivo3);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    printf("Conteudo dos dois arquivos foi combinado em '%s'.\n", NomeArquivo3);
    return 0;
}
