#include<stdio.h>

int main(){

    int idade = 0;
    int continuar = 1;
    int cont18 = 0, cont30 = 0;

    while(continuar == 1){

        printf("Digite a idade:\n");
            scanf("%d", &idade);

        if(idade == 0)
        {
            continuar = 0;
        }
        else if(idade <= 18 && idade != 0)
        {
            cont18++;
        }
        else if(idade >= 30 && idade != 0)
        {
            cont30++;
        }
    }

    printf("Quantidade de pessoas menores de 18 anos: %d\n", cont18);
    printf("Quantidade de pessoas menores de 30 anos: %d\n", cont30);
    


}