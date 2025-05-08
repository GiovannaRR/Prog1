#include <stdio.h>
#include <string.h>
#define MAX 255

struct dados {
    char nome[MAX];
    int registro;
    float preco;
} dados_livros;

void cadastro(struct dados livros[], int *n) {
    printf("Digite o titulo do livro:\n");
        getchar();
        fgets(livros[*n].nome, MAX, stdin);
        livros[*n].nome[strlen(livros[*n].nome) - 1] = '\0';
    printf("Digite o numero de registro:\n");
        scanf("%d", &livros[*n].registro);
    printf("Digite o preco do livro:\n");
        scanf("%f", &livros[*n].preco);

    (*n)++;
}

void salvar(const char *nomeArquivo, struct dados livros[], int n) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo!");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(arquivo, "%s\n%d\n%.2f\n", livros[i].nome, livros[i].registro, livros[i].preco);
    }

    fclose(arquivo);
    printf("Dados salvos no arquivo '%s'.\n", nomeArquivo);
}

void ler(const char *nomeArquivo, struct dados livros[], int *n) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo!");
        return;
    }

    *n = 0;
    while (fgets(livros[*n].nome, MAX, arquivo) != NULL) {
        livros[*n].nome[strcspn(livros[*n].nome, "\n")] = '\0';
        fscanf(arquivo, "%d", &livros[*n].registro);
        fscanf(arquivo, "%f", &livros[*n].preco);
        fgetc(arquivo);
        (*n)++;
    }

    fclose(arquivo);
}

void exibir(struct dados livros[], int n) {
    printf("\nDados dos livros cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("Titulo: %s\n", livros[i].nome);
        printf("Registro: %d\n", livros[i].registro);
        printf("Preco: R$ %.2f\n\n", livros[i].preco);
    }
}

int main() {
    struct dados dados_livros[MAX];
    int n = 0;
    const char *nomeArquivo = "livros.txt";

    int opcao;
    do {
        printf("1. Cadastrar livro\n");
        printf("2. Salvar dados no arquivo\n");
        printf("3. Ler dados do arquivo\n");
        printf("4. Exibir dados\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            cadastro(dados_livros, &n);
            break;
        case 2:
            salvar(nomeArquivo, dados_livros, n);
            break;
        case 3:
            ler(nomeArquivo, dados_livros, &n);
            break;
        case 4:
            exibir(dados_livros, n);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
