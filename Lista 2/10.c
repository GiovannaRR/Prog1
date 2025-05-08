#include<stdio.h>

int main(){

    int inter_graf, int_art, encap, ident, structs;

    printf("Voce utilizou interface grafica? (0 ou 1)\n");
        scanf("%d", &inter_graf);

    printf("Voce utilizou inteligencia artificial? (0 ou 1)\n");
        scanf("%d", &int_art);

    printf("Voce utilizou encapsulamento? (0 ou 1)\n");
        scanf("%d", &encap);

    printf("Voce utilizou identacao? (0 ou 1)\n");
        scanf("%d", &ident);

    printf("Voce utilizou structs? (0 ou 1)");
        scanf("%d", &structs);

    if (inter_graf == 1 || int_art == 1)
    {
        printf("Requisito 1 cumprido\n");
    }
    if (encap == 1 && ident == 1)
    {
        printf("Requisito 2 cumprido\n");
    }
    if (structs == 1)
    {
        printf("requisito 3 cumprido\n");
    }
    if ((inter_graf == 1 || int_art == 1) && (encap == 1 && ident == 1) && (structs == 1))
    {
        printf("O aluno cumpriu os 3 requisitos, trabalho sendo avaliado");
    }
    else
    {
        printf("Os requisitos nao foram cumpridos");
    }
    
    return 0;

}