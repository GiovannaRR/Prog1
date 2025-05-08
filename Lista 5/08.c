#include <stdio.h>
#define tam 100 

int main() {
    int idades[tam];
    int idade;
    int menos_18 = 0;
    int mais_30 = 0;
    int indice = 0;

    printf("Digite as idades das pessoas, digite 0 para encerrar:\n");
    do {
        printf("Digite a idade da pessoa %d: ", indice + 1);
        scanf("%d", &idade);

        if (idade > 0) { 
            idades[indice] = idade;
            indice++;

            if (idade < 18) {
                menos_18++;
            } else if (idade > 30) {
                mais_30++;
            }
        }
    } while (idade != 0 && indice < tam);

    printf("Total de pessoas com menos de 18 anos: %d\n", menos_18);
    printf("Total de pessoas com mais de 30 anos: %d\n", mais_30);

    return 0;
}
