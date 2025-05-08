#include<stdio.h>

    void divisores_total(int n){

        int divisores = 0;

        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                divisores ++;
            }
        }

    printf("\nA quantidade de divisores eh: %d", divisores);
    }

int main(){

    int num = 0;

    printf("Digite um numero:");
        scanf("%d", &num);

    divisores_total(num);

    return 0;
}