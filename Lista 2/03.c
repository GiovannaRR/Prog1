#include<stdio.h>

int main(){

    float n1, n2, n3;
    float media;

    printf("Digite 3 numeros:");
        scanf("%f%f%f", &n1, &n2, &n3);

    media = (n1 + n2 + n3)/3;

    if (n1 > media)
    {
        printf("%.2f eh maior que a media, o valor da media eh %.2f", n1, media);
    }
    else if (n2 > media)
    {
        printf("%.2f eh maior que a media, o valor da media eh %.2f", n2, media);
    }
    else if (n3 > media)
    {
        printf("%.2f eh maior que a media, o valor da media eh %.2f", n3, media);
    }

    return 0;    
}