#include<stdio.h>
#include<string.h>
#define MAX 255

    struct produto{

        int codigo;
        float preco;
        char descricao[MAX];
        int alcolica; // 0 para nao e 1 para sim
    }produtos;

    void cadastrar(struct produto produtos[], int *total){ // Coletando os dados do produto
        printf("\n============Funcao de Cadastro============\n");
        printf("Digite o codigo do produto:\n");
            scanf("%d", &produtos[*total].codigo);
        printf("Digite o preco do produto:\n");
            scanf("%f", &produtos[*total].preco);
        printf("Digite a descricao do porduto:\n");
            //scanf("%[^\n]s", &produtos[*total].descricao); 
            getchar();
            fgets(produtos[*total].descricao, MAX, stdin);
        printf("A bebida eh alcolica? (digite 1 para sim e 0 para nao)\n");
            scanf("%d", &produtos[*total].alcolica);

        (*total)++;
    }

    void pesquisar(struct produto produtos[], int total){
        int codigo, encontrado = 0;

        printf("\n============Funcao de Pesquisa============\n");
        printf("1.Digite o codigo do produto que deseja pesquisar:\n");
            scanf("%d", &codigo);

        for(int i = 0; i < total; i++){
            if(produtos[i].codigo == codigo){
                printf("O codigo eh: %d\n", produtos[i].codigo);
                printf("O preco do produto eh: %.2f\n", produtos[i].preco);
                printf("A descricao do produto: %s\n", &produtos[i].descricao);
                printf("A bebida eh alcolica?:%s\n", produtos[i].alcolica ? "sim" : "nao");
                encontrado = 1;
                break;
            }
        }
        if(!encontrado){
            printf("Codigo %d nao encontrado\n", codigo);
        }
    }

    void calcular(struct produto produtos[], int total){
        float soma = 0;

        for(int i = 0; i < total; i++){
            soma += produtos[i].preco;
        }

        printf("O valor da soma dos produtos eh %.2f", soma);
    }

    void menu(){
        printf("\n============Menu============\n");
        printf("1.Cadastrar:\n");
        printf("2.Pesquisar:\n");
        printf("3.Calcular:\n");
        printf("4.Sair:\n");
    }

int main(){
    struct produto produtos[MAX];
    int opcoes = 0;
    int total_produtos = 0; 

    //chamar a função menu
    while(opcoes != 4){
        menu();
        printf("Digite o numero correspondente a opcao escolhida:\n");
            scanf("%d", &opcoes);
        switch (opcoes){

            case 1:
                cadastrar(produtos, &total_produtos);
                break;

            case 2:
                if(total_produtos > 0){
                    pesquisar(produtos, total_produtos);
                }
                else{
                    printf("O produto nao foi cadastrado\n");
                }
                break;

            case 3:
                if(total_produtos > 0 ){
                    calcular(produtos, total_produtos);
                }

                else{
                    printf("O produto nao foi cadastrado para calcular o total \n");
                }
                break;

            case 4: 
                printf("Obrigada por usar o programa!...");
                break;
            default:
                printf("Opcao invalida, tente novamente\n");
        }
    }
    return 0;
}