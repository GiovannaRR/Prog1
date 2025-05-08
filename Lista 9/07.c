#include <stdio.h>
#include <stdlib.h>

struct Funcionario {
    char nome[50];
    int idade;
    float salario;
};

void lerFuncionarios(struct Funcionario *funcionarios, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do funcionario %d: ", i + 1);
        getchar(); 
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);

        printf("Digite a idade do funcionario %d: ", i + 1);
        scanf("%d", &funcionarios[i].idade);

        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%f", &funcionarios[i].salario);
    }
}

float calcularMediaSalarios(struct Funcionario *funcionarios, int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += funcionarios[i].salario;
    }
    return soma / n;
}

int main() {
    int n;

    printf("Digite o numero de funcionarios: ");
    scanf("%d", &n);

    struct Funcionario *funcionarios = (struct Funcionario *)malloc(n * sizeof(struct Funcionario));

    lerFuncionarios(funcionarios, n);

    float mediaSalarios = calcularMediaSalarios(funcionarios, n);
    printf("A media dos salarios dos funcionarios eh: %.2f\n", mediaSalarios);

    free(funcionarios);

    return 0;
}
