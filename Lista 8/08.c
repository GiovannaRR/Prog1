#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define DESCRICAO_LENGTH 200

struct Produto {
    int codigo;
    float preco;
    char descricao[DESCRICAO_LENGTH];
};

void cadastrarProdutos(struct Produto produtos[], int *n) {
    printf("\n======== Cadastro de Produtos ========\n");

    if (*n >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    printf("Quantos produtos deseja cadastrar? (restam %d vagas)\n", MAX_PRODUTOS - *n);
    int max;
    scanf("%d", &max);

    if (max <= 0 || max > (MAX_PRODUTOS - *n)) {
        printf("Numero invalido! Pode cadastrar no maximo %d produtos.\n", MAX_PRODUTOS - *n);
        return;
    }

    for (int i = 0; i < max; i++) {
        printf("Digite o codigo do produto:\n");
        scanf("%d", &produtos[*n].codigo);
        
        printf("Digite a descricao do produto:\n");
        getchar(); 
        fgets(produtos[*n].descricao, DESCRICAO_LENGTH, stdin);
        produtos[*n].descricao[strcspn(produtos[*n].descricao, "\n")] = '\0'; 

        printf("Digite o preco do produto:\n");
        scanf("%f", &produtos[*n].preco);

        (*n)++;
    }
}

void listarProdutos(struct Produto produtos[], int n) {
    printf("\n======== Lista de Produtos ========\n");
    for (int i = 0; i < n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Descricao: %s\n", produtos[i].descricao);
        printf("Preco: %.2f\n\n", produtos[i].preco);
    }
}

void reajustarPrecos(struct Produto produtos[], int n, float percentual) {
    printf("\n======== Reajuste de Precos ========\n");
    for (int i = 0; i < n; i++) {
        produtos[i].preco += produtos[i].preco * (percentual / 100);
    }
    printf("Precos reajustados em %.2f%%.\n", percentual);
}

void menu() {
    printf("\n======== Menu ========\n");
    printf("1. Cadastrar Produtos\n");
    printf("2. Listar Produtos\n");
    printf("3. Reajustar Precos\n");
    printf("4. Sair\n");
}

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    int total = 0;
    int opcao = 0;

    while (opcao != 4) {
        menu();
        printf("Digite a opcao desejada:\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProdutos(produtos, &total);
                break;
            case 2:
                listarProdutos(produtos, total);
                break;
            case 3: {
                float percentual;
                printf("Digite o percentual de reajuste:\n");
                scanf("%f", &percentual);
                reajustarPrecos(produtos, total, percentual);
                break;
            }
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
