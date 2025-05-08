#include<stdio.h>

    int calcula(int x, int n){
        int resultado = 1;

        for(int i = 0; i < n; i++){
            resultado *= x;
        }
        return resultado;
    }
int main(){

    int x, n;
    int potencia;

    printf("Digite um valor para x e um para n:\n");
        scanf("%d%d", &x, &n);

    potencia = calcula(x,n);

    printf("O valor da potencia eh:%d", potencia);

    return 0;
}