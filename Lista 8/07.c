#include<stdio.h>
#include<string.h>
#define MAX 255

    struct funcionario{

        char nome[MAX];
        int idade;
        float salario;
    } salario;

    void cadastro(struct funcionario salario[], int *n){

        printf("Digite o nome do funcionario:\n");
            getchar();
            fgets(salario[*n].nome, MAX, stdin);
            salario[*n].nome[strlen(salario[*n].nome) - 1] = '\0';
        printf("Digite a idade:\n");
            scanf("%d", &salario[*n].idade);
        printf("Digite o salario:\n");
            scanf("%f", &salario[*n].salario);
        (*n)++;
    }

    void lista(struct funcionario salario[], int n){
        printf("\n======== Lista de Funcionarios ========\n");

        for(int i = 0; i < n; i++){
            printf("Funcionario %d\n", i + 1);
            printf("Nome: %s\n", salario[i].nome);
            printf("Idade: %d\n", salario[i].idade);
            printf("Salario: %f\n", salario[i].salario);
        }
    }

   void filtrar(struct funcionario salario[], int n, float limite) {
        printf("\n======== Funcionarios com Salario Maior que %.2f ========\n", limite);
        int encontrou = 0;

        for (int i = 0; i < n; i++) {
            if (salario[i].salario > limite) {
                printf("Nome: %s\n", salario[i].nome);
                printf("Idade: %d\n", salario[i].idade);
                printf("Salario: %.2f\n\n", salario[i].salario);
                encontrou = 1;
            }
        }

        if (!encontrou) {
            printf("Nenhum funcionario encontrado com salario acima de %.2f.\n", limite);
        }
    }

    void menu() {
        printf("\n======== Menu ========\n");
        printf("1. Cadastrar Funcionarios\n");
        printf("2. Listar Funcionarios\n");
        printf("3. Filtrar Funcionarios por Salario\n");
        printf("4. Sair\n");
    }

    int main() {
        struct funcionario salario[MAX];
        int total = 0;
        int opcao = 0;

        while (opcao != 4) {
            menu();
            printf("Digite a opcao desejada:\n");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    cadastro(salario, &total);
                    break;

                case 2:
                    lista(salario, total);
                    break;

                case 3: {
                    float limite;
                    printf("Digite o limite de salario:\n");
                        scanf("%f", &limite);
                    filtrar(salario, total, limite);
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
