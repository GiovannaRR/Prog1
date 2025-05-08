#include<stdio.h>
#include<string.h>
#define MAX 255

    struct video{
        char titulo[MAX];
        char genero[MAX];
        char data_lancamento[MAX];
        int vezes_assistidos;
    }videos;

    void cadastro(struct video videos[], int *n){
        printf("\n============Funcao de Cadastro============\n");
        printf("Digite o titulo do video:\n");
            getchar();
            fgets(videos[*n].titulo, MAX, stdin);
            videos[*n].titulo[strlen(videos[*n].titulo) - 1] = '\0';
        printf("Digite o genero do video:\n");
            fgets(videos[*n].genero, MAX, stdin);
            videos[*n].genero[strlen(videos[*n].genero) - 1] = '\0';
        printf("Digite a data de lancamento do video(dd/mm/aa):\n");
            fgets(videos[*n].data_lancamento, MAX, stdin);
            videos[*n].data_lancamento[strlen(videos[*n].data_lancamento) - 1] = '\0';
        printf("Digite a quantidade de vezes que o video foi assistido:\n");
            scanf("%d", &videos[*n].vezes_assistidos);
            getchar();
        (*n)++;
    }

    void todos_videos(struct video videos[], int n){
        printf("\n============Funcao Cadastrados============\n");

        for(int i = 0; i < n; i++){
            printf("O Titulo do video eh: %s\n", videos[i].titulo);
            printf("O Genero do video eh: %s\n", videos[i].genero);
            printf("A data de lancamento do video eh: %s\n", &videos[i].data_lancamento);
            printf("A quantidade de vezes que o video foi assistido:%d\n", videos[i].vezes_assistidos);
        }
    }

    void pesquisar(struct video videos[], int n){

        char titulo[MAX];
        int encontrado = 0;

        printf("\n============Funcao de Pesquisa============\n");
        printf("1.Digite o nome do video que deseja pesquisar:\n");
            getchar();
            fgets(titulo, MAX, stdin);

        for(int i = 0; i < n; i++){
            printf("O Titulo do video eh: %s\n", videos[i].titulo);
            printf("O Genero do video eh: %s\n", videos[i].genero);
            printf("A data de lancamento do video eh: %s\n", &videos[i].data_lancamento);
            printf("A quantidade de vezes que o video foi assistido:%d\n", videos[i].vezes_assistidos);
            encontrado = 1;
        }
        if(!encontrado){
        printf("Titulo nao encontrado!");
        }
    }

    void menu(){
        printf("\n============Menu============\n");
        printf("1.Cadastrar:\n");
        printf("2.Todos os cadastros:\n");
        printf("3.Pesquisar:\n");
        printf("4.Sair:\n");
    }

int main(){

    struct video videos[MAX];
    int opcoes = 0; 
    int videos_total = 0;

    while(opcoes != 4){
        menu();
        printf("Digite o numero correspondente a opcao escolhida:\n");
            scanf("%d", &opcoes);
        switch (opcoes){

            case 1:
                cadastro(videos, &videos_total);
                break;

            case 2:
                if(videos_total > 0){
                    todos_videos(videos, videos_total);
                }
                else{
                    printf("O produto nao foi cadastrado\n");
                }
                break;

            case 3:
                if(videos_total > 0 ){
                    pesquisar(videos, videos_total);
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