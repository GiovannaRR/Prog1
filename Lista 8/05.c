#include<stdio.h>
#include<string.h>
#define MAX 255
#define NumAlunos 20

    struct dados{
        char nome[MAX];
        int idade;
        float peso;

    } dados_alunos;

    void cadastro(struct dados dados_alunos[], int *n){
        printf("\n============Funcao de Cadastro============\n");
        int max;

        if(*n >= NumAlunos){
             printf("Ja foi atingido o limite de %d alunos cadastrados!\n", NumAlunos);
            return;
        }

        printf("Quantos alunos deseja cadastrar? (Restam %d vagas)\n", NumAlunos - *n);
            scanf("%d", &max);

        if (max <= 0 || max > (NumAlunos - *n)) {
            printf("Numero invalido! Pode cadastrar no maximo %d alunos.\n", NumAlunos - *n);
            return;
        }

        for(int i = 0; i < max; i++){
            printf("Digite o nome do aluno:\n");
                getchar();
                fgets(dados_alunos[*n].nome, MAX, stdin);
                dados_alunos[*n].nome[strlen(dados_alunos[*n].nome) - 1] = '\0';
            printf("Digite a idade do aluno:\n");
                scanf("%d", &dados_alunos[*n].idade);
            printf("Digite o peso do aluno:\n");
                scanf("%f", &dados_alunos[*n].peso);
            (*n)++;
        }
    }

    void idade(struct dados dados_alunos[], int n){
        printf("\n============Funcao Maior Idade============\n");

        int comparar = dados_alunos[0].idade;
        int menor = 0;

        for(int i = 0; i < n; i++){
            if(dados_alunos[i].idade < comparar){
                comparar = dados_alunos[i].idade;
                menor = i;
            }
        }
        printf("O aluno com a menor idade eh:\n");
        printf("Nome:%s\n", dados_alunos[menor].nome);
        printf("Idade:%d\n", dados_alunos[menor].idade);
    }

    void peso(struct dados dados_alunos[], int n){
        printf("\n============Funcao Maior Peso============\n");

        int comparar = dados_alunos[0].peso;
        int maior = 0;

        for(int i = 0; i < n; i++){
            if(dados_alunos[i].peso > comparar){
                comparar = dados_alunos[i].peso;
                maior = i;
            }
        }
        printf("O aluno com maior peso eh:\n");
        printf("Nome:%s\n", dados_alunos[maior].nome);
        printf("Peso:%.2f\n", dados_alunos[maior].peso);
    }

    void menu(){
        printf("\n============Menu============\n");
        printf("1.Cadastrar:\n");
        printf("2.Menor Idade:\n");
        printf("3.Maior Peso:\n");
        printf("4.Sair:\n");
    }

int main(){

    struct dados dados_alunos[MAX];
    int opcoes = 0;
    int total = 0;

    while(opcoes != 4){
        menu();
        printf("Digite a opcao desejada:\n");
            scanf("%d", &opcoes);

        switch (opcoes){
            
            case 1:
                cadastro(dados_alunos, &total);
                break;

            case 2:
                idade(dados_alunos, total);
                break;

            case 3:
                peso(dados_alunos, total);
                break;

            case 4:
                printf("Obrigada por usar o programa!...");
                break;

            default:
                printf("Opcao invalida, tente novamente!\n");
        }
    }
    return 0;
}