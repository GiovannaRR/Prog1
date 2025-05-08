#include<stdio.h>

    float media_a(float n1, float n2){
        float media = (n1+n2)/2.0;
        return media;
    }
    float media_p(float n1, float n2){
        float media = (3 * n1 + 2 * n2)/ 5.0;
        return media;
    }
    float media_h(float n1, float n2){
        float media = 2 / (1 / n1 + 1 / n2);
        return media;
    }
int main(){
    float n1, n2;
    char cod;
    float media;

    printf("Digite duas notas:\n");
        scanf("%f%f", &n1, &n2);

    printf("Digite o codigo de qual media voce deseja:\n");
        scanf(" %c", &cod);
    
    switch (cod)
    {
    case 'a':
        media = media_a(n1, n2);
        printf("A media aritimetica eh: %.2f\n", media);
        break;
    
    case 'p':
        media = media_p(n1, n2);
        printf("A media ponderada eh: %.2f\n", media);
        break;
    
    case 'h':
        media = media_h(n1, n2);
        printf("A media harmonica eh: %.2f\n", media);
        break;
    }
}