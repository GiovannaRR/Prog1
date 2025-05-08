#include<stdio.h>
#include<string.h>
#define MAX_ALUNOS 50
#define MAX 255

    struct dados{
        char nome[MAX];
        int idade;
        float nota;
    } dados_alunos;

    void cadastro(struct dados dados_alunos[], int *maximo){

        printf("\n============Funcao de Cadastro============\n");
        int max;

        if (*maximo >= MAX_ALUNOS) {
        printf("Ja foi atingido o limite de %d alunos cadastrados!\n", MAX_ALUNOS);
        return;
        }

        printf("Quantos alunos deseja cadastrar? (Restam %d vagas)\n", MAX_ALUNOS - *maximo);
        scanf("%d", &max);

        if (max <= 0 || max > (MAX_ALUNOS - *maximo)) {
            printf("Numero invalido! Pode cadastrar no maximo %d alunos.\n", MAX_ALUNOS - *maximo);
            return;
        }

        for(int i = 0; i < max; i++){
            printf("Digite o nome do aluno:\n");
                getchar();
                fgets(dados_alunos[*maximo].nome, MAX, stdin);
                dados_alunos[*maximo].nome[strlen(dados_alunos[*maximo].nome) - 1] = '\0';
            printf("Digite a idade do aluno:\n");
                scanf("%d", &dados_alunos[*maximo].idade);
            printf("Digite a nota do aluno:\n");
                scanf("%f", &dados_alunos[*maximo].nota);
            (*maximo)++;
            break;
        }
    }

    void notas(struct dados dados_alunos[], int maximo){

        printf("\n============Funcao de Notas============\n");
        int aprovados = 0;
        int exame = 0;
        int reprovado = 0;

        for(int i = 0; i < maximo; i++){

            if(dados_alunos[i].nota >= 7){

                printf("Os alunos que foram aprovados:\n");
                printf("Nome: %s\n", dados_alunos[i].nome);
                printf("Idade: %d\n", dados_alunos[i].idade);
                printf("Nota: %.2f\n", dados_alunos[i].nota);

                aprovados ++;
            }

            else if(dados_alunos[i].nota >= 4 && dados_alunos[i].nota < 7){

                printf("\nOs alunos que ficaram de exame:\n");
                printf("Nome: %s\n", dados_alunos[i].nome);
                printf("Idade: %d\n", dados_alunos[i].idade);
                printf("Nota: %.2f\n", dados_alunos[i].nota);
                exame ++;
            }

            else if(dados_alunos[i].nota < 4){

                printf("\nOs alunos que foram reprovados:\n");
                printf("Nome: %s\n", dados_alunos[i].nome);
                printf("Idade: %d\n", dados_alunos[i].idade);
                printf("Nota: %.2f\n", dados_alunos[i].nota);
                reprovado ++;
            }
        }
    }

    void media(struct dados dados_alunos[], int maximo){

        float media = 0;
        
        for(int i = 0; i < maximo; i++){
            media += (dados_alunos[i].nota);
        }
        float calculo = media/maximo;

        printf("A media de todas as notas eh: %.2f\n", calculo);
    }

    void maior_nota(struct dados dados_alunos[], int maximo){

        float n_alunos = dados_alunos[0].nota;
        int maior_nota = 0;

        for(int i = 0; i < maximo; i++){
            if(dados_alunos[i].nota > n_alunos){

                n_alunos = dados_alunos[i].nota;
                maior_nota = i;
            }
        }
        printf("Nome:%s\n", dados_alunos[maior_nota].nome);
        printf("Nota:%.2f\n", dados_alunos[maior_nota].nota);
    }

    void menu(){
        printf("\n============Menu============\n");
        printf("1.Cadastrar:\n");
        printf("2.Todas as Notas:\n");
        printf("3.Media dos Alunos:\n");
        printf("4.Maior Nota:\n");
        printf("5.Sair:\n");
    }

int main(){

    struct dados dados_alunos[MAX];
    int opcoes = 0;
    int total = 0;

    while(opcoes != 5){
        menu();
        printf("Digite a opcao desejada:\n");
            scanf("%d", &opcoes);

        switch(opcoes){
            case 1: 
                cadastro(dados_alunos, &total);
                break;

            case 2: 
                notas(dados_alunos, total);
                break;
            
            case 3:
                media(dados_alunos, total);
                break;
            
            case 4:
                maior_nota(dados_alunos, total);
                break;
            
            case 5:
                printf("Obrigada por usar o programa!...\n");
                break;
            
            default:
                printf("Opcao invalida! tente novamente");
        }
    }
    return 0;
}