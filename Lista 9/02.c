#include <stdio.h>
#include <stdlib.h>

void lerNotas(int *notas, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite a nota do cliente %d (1 a 5): ", i + 1);
        scanf("%d", &notas[i]);

    }
}

void calcularResultados(int *notas, int n, int *qtdSatisfeitos, float *porcInsatisfeitos, float *media) {
    int soma = 0;
    *qtdSatisfeitos = 0;
    int qtdInsatisfeitos = 0;

    for (int i = 0; i < n; i++) {
        if (notas[i] == 5) {
            (*qtdSatisfeitos)++;
        }
        if (notas[i] < 3) {
            qtdInsatisfeitos++;
        }
        soma += notas[i];
    }

    *media = (float)soma / n;
    *porcInsatisfeitos = (float)qtdInsatisfeitos / n * 100;
}

int main() {
    int n;

    printf("Digite o numero de avaliacoes: ");
    scanf("%d", &n);

    int *notas = (int *)malloc(n * sizeof(int));

    lerNotas(notas, n);

    int qtdSatisfeitos;
    float porcInsatisfeitos, media;

    calcularResultados(notas, n, &qtdSatisfeitos, &porcInsatisfeitos, &media);

    printf("Quantidade de avaliacoes com nota 5: %d\n", qtdSatisfeitos);
    printf("Porcentagem de avaliacoes insatisfeitas (nota < 3): %.2f%%\n", porcInsatisfeitos);
    printf("Media das avaliacoes: %.2f\n", media);

    free(notas);

    return 0;
}
