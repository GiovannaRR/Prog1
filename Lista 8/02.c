#include <stdio.h>
#include <string.h>

#define MAX_DOSES 4
#define MAX_NOME 50
#define MAX_DATA 11
#define MAX_FABRICANTE 50

struct dose {
    int dose;
    char data[MAX_DATA];
    char fabricante[MAX_FABRICANTE];
};

struct pessoa {
    char nome[MAX_NOME];
    struct dose doses[MAX_DOSES];
    int total_doses;
};

void cadastro(struct pessoa *p) {
    if (p->total_doses >= MAX_DOSES) {
        printf("Limite de doses alcancado! Não é possivel cadastrar mais doses.\n");
        return;
    }

    printf("Digite o numero da dose (ex: 1, 2, 3, ...): ");
    scanf("%d", &p->doses[p->total_doses].dose);

    printf("Digite a data da dose (DD/MM/AAAA): ");
    scanf("%s", p->doses[p->total_doses].data);

    printf("Digite o fabricante da vacina: ");
    scanf("%s", p->doses[p->total_doses].fabricante);
    
    p->total_doses++;
    printf("Dose cadastrada com sucesso!\n");
}

void mostrarDoses(struct pessoa p) {
    printf("\nDoses registradas para %s:\n", p.nome);
    if (p.total_doses == 0) {
        printf("Nenhuma dose cadastrada.\n");
        return;
    }
    
    for (int i = 0; i < p.total_doses; i++) {
        printf("Dose %d:\n", p.doses[i].dose);
        printf("Data: %s\n", p.doses[i].data);
        printf("Fabricante: %s\n\n", p.doses[i].fabricante);
    }
}

int main() {
    struct pessoa pessoa1;
    pessoa1.total_doses = 0;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa1.nome);

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar nova dose\n");
        printf("2. Mostrar todas as doses\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastro(&pessoa1);
                break;
            case 2:
                mostrarDoses(pessoa1);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
