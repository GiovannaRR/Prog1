#include <stdio.h>

int main() {
    float x, y;

    printf("Digite a coordenada X: ");
    scanf("%f", &x);
    printf("Digite a coordenada Y: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Primeiro quadrante\n");
    } else if (x < 0 && y > 0) {
        printf("Segundo quadrante\n");
    } else if (x < 0 && y < 0) {
        printf("Terceiro quadrante\n");
    } else if (x > 0 && y < 0) {
        printf("Quarto quadrante\n");
    }

    return 0;
}
