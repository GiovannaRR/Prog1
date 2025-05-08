#include<stdio.h>

    int tabuada(int n){
        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", n, i, n*i );
        }
    }
int main(){
    
    int num;

    printf("Digite um numero:\n");
        scanf("%d", &num);

    tabuada(num);
 
}