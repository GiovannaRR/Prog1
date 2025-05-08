#include<stdio.h>

int main(){

    char letra;

    printf("Digite uma letra:");
        scanf(" %c", &letra);

    if(letra == 'a'|| letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ){

        printf("Sua letra eh uma vogal\n");
    }
    else
    {
        printf("Sua letra eh uma consoante");
    }

    return 0;
}