#include <stdio.h>

int main(){

    int a,b,c;

    printf("Digite tres numeros:");
        scanf("%d%d%d", &a,&b,&c);
    
    if(a<b && a<c){

        printf("O numero %d eh menor", a);
    }
    if(a>b && b<c){

        printf("O numero %d eh menor", b);
    }
    if(a>c && b>c){

        printf("O numero %d eh menor", c);
    }
    return 0;
}