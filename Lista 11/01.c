#include <stdio.h>
#include <string.h>
#define MAX 255

void escrever(const char *nomeArquivo) {
    char titulo[MAX];
    int registro;
    float preco;
    FILE *arquivo;

    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return;
    }

    printf("Digite o titulo do livro:\n");
    getchar(); // Limpa o buffer
    fgets(titulo, MAX, stdin);
    titulo[strcspn(titulo, "\n")] = '\0';

    printf("Digite o numero de registro:\n");
    scanf("%d", &registro);

    printf("Digite o preco do livro:\n");
    scanf("%f", &preco);

    fprintf(arquivo, "%s\n%d\n%.2f\n", titulo, registro, preco);

    fclose(arquivo);
    printf("Dados salvos no arquivo '%s'.\n", nomeArquivo);
}

void ler(const char *nomeArquivo) {
    char titulo[MAX];
    int registro;
    float preco;
    FILE *arquivo;

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para leitura");
        return;
    }

    fgets(titulo, MAX, arquivo);
    titulo[strcspn(titulo, "\n")] = '\0'; // Remove o '\n'

    fscanf(arquivo, "%d", &registro);
    fscanf(arquivo, "%f", &preco);

    fclose(arquivo);

    printf("\nDados do livro lido:\n");
    printf("Titulo: %s\n", titulo);
    printf("Registro: %d\n", registro);
    printf("Preco: R$ %.2f\n", preco);
}

int main() {
    const char *nomeArquivo = "livros.txt";
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar livro e salvar no arquivo\n");
        printf("2. Ler dados do arquivo e exibir\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            escrever(nomeArquivo);
            break;
        case 2:
            ler(nomeArquivo);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
