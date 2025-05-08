#include <stdio.h>
#define TAM 100 

int main() {
    int vet[TAM];
    int cont = 0;
    int num;
    int intervalo = 0;

    printf("Digite os numeros, para terminar digite -1:\n");
    while (cont < TAM) {
        scanf("%d", &num);
        
        if (num == -1) {
            break;
        }
        
        vet[cont] = num;
        cont++;
        
        if (num >= 10 && num <= 50) {
            intervalo++;
        }
    }

    printf("Numeros no intervalo: %d\n", intervalo);

    return 0;
}
