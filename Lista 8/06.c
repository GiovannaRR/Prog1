#include<stdio.h>
#include<string.h>
#define NOME 100
#define END 200
#define LOJA 100

    struct loja{

        char nome[NOME];
        char endereco[END];
        double telefone;
        float preco;
    } lojas;

        void cadastro(struct loja lojas[], int *n){
            printf("\n============Funcao de Cadastro============\n");

            int max;

            if(*n >= LOJA){
                printf("O limite de lojas cadastradas foi atingido!\n");
                return;
            }

            printf("Quantas lojas deseja cadastrar?:(restam %d vagas\n", LOJA - *n);
                scanf("%d", &max);

            if(max <= 0 || max > (LOJA - *n)) {
            printf("Numero invalido! Pode cadastrar no maximo %d lojas.\n", LOJA - *n);
            return;
            }

            for(int i = 0; i < max; i++){
                printf("Digite o nome da loja:\n");
                    getchar();
                    fgets(lojas[*n].nome, NOME, stdin);
                    lojas[*n].nome[strlen(lojas[*n].nome) - 1] = '\0';
                printf("Digite o endereco da loja:\n");
                    fgets(lojas[*n].endereco, END, stdin);
                    lojas[*n].endereco[strlen(lojas[*n].endereco) - 1] = '\0';
                printf("Digite o numero de telefone da loja:\n");
                    scanf("%lf", &lojas[*n].telefone);
                printf("Digite o preco do produto desejado:\n");
                    scanf("%f", &lojas[*n].preco);
                (*n)++;
            }
        }

        void media_produtos(struct loja lojas[], int n, float *media){
            printf("\n============Funcao de Media============\n");

            float soma = 0;

            for(int i = 0; i < n; i++){
                soma += lojas[i].preco;
            }
            *media = soma/n;

            printf("A media eh: %.2f\n", *media);
        }

        void menor_preco(struct loja lojas[], int n, float media){
        printf("\n============Funcao de Menor Preco============\n");

            for(int i = 0; i < n; i++){
                if(lojas[i].preco < media){
                    printf("Nome: %s\n", lojas[i].nome);
                    printf("Endereco: %s\n", lojas[i].endereco);
                    printf("Telefone: %.0lf\n", lojas[i].telefone);
                    printf("Preco: %.2f\n", lojas[i].preco);
                }
            }
        }

        void menu(){
        printf("\n============Menu============\n");
        printf("1.Cadastrar:\n");
        printf("2.Media de Produtos:\n");
        printf("3.Menor Preco:\n");
        printf("4.Sair:\n");
    }

    int main(){

        struct loja lojas[LOJA];
        float media = 0;
        int total = 0;
        int opcao = 0;

        while(opcao != 4){
            menu();
            printf("Digite a opcao desejada:\n");
                scanf("%d", &opcao);

            switch(opcao){

                case 1:
                    cadastro(lojas, & total);
                    break;
                
                case 2:
                    media_produtos(lojas, total, &media);
                    break;

                case 3:
                    menor_preco(lojas, total, media);
                    break;

                case 4:
                    printf("Obrigada por usar o programa!...");
                    break;
                
                default:
                    printf("Opcao invalida! Tente novamente");
            }
        }
        return 0;
    }