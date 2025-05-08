#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    struct alimento{
        char nome[50];
        int calorias;
    }alimentos; 

    void CadastrarAlimento(struct alimento **alimentos, int *p){
        printf("\n============Funcao de Cadastro============\n");
        *alimentos = realloc(* alimentos, (*p + 1) * sizeof(struct alimento));
        printf("Digite o nome do alimento:\n");
            getchar();
            fgets((*alimentos)[*p].nome, 50, stdin);
            (*alimentos)[*p].nome[strlen((*alimentos)[*p].nome) - 1] = '\0';
        printf("Digite a quantidade de calorias:\n");
            scanf("%d", &(*alimentos)[*p].calorias);
        (*p)++;
    }

    void Exibir(struct alimento *alimentos, int p){
        printf("\n============Funcao de Exibir============\n");
        for(int i = 0; i < p; i++){
            printf("Nome: %s \n", alimentos[i].nome);
            printf("Calorias: %d\n", alimentos[i].calorias);
        }
    }

    void Busca(struct alimento *alimentos, int p){
        printf("\n============Funcao de Busca============\n");
        char buscar_nome[50];

        printf("Digite o nome do alimento que esta buscando:\n");
            getchar();
            fgets(buscar_nome, 50, stdin);
            buscar_nome[strlen(buscar_nome) - 1] = '\0';

        for(int i = 0; i < p; i++){
            if (strcmp(alimentos[i].nome, buscar_nome) == 0){
                    printf("Nome: %s\n", alimentos[i].nome);
                    printf("Calorias: %d\n", alimentos[i].calorias);
            }
        }
    }

    void menu(){
        printf("\n============Menu============\n");
        printf("1.Cadastro de alimentos:\n");
        printf("2.Exibir todos os alimentos:\n");
        printf("3.Buscar alimentos:\n");
        printf("4.Sair:\n");
    }

int main(){

    struct alimento *alimentos = NULL;
    int opcoes = 0;
    int total = 0;

    while(opcoes != 4){
        menu();

        printf("Digite uma opcao:");
            scanf("%d", &opcoes);

        switch(opcoes){

            case 1 :
                CadatrarAlimento(&alimentos, &total) ;
                break;
            
            case 2:
                Exibir(alimentos, total);
                break;

            case 3:
                Busca(alimentos, total);
                break;

            case 4: 
                printf("Obrigada por usar o programa!...");
                break;
        }
    }
    return 0;
}