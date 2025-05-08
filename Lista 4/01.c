#include<stdio.h>

    float calc_area(float altura, float base){
        
        return base * altura;
    }

int main(){

    int n;
    float area = 0;
    float base = 0, altura = 0;

    printf("Digite a quantidade de terrenos que deseja calcular:\n");
        scanf("%d", &n);
        
    for(int i = 0; i <= n; i++){

        printf("Digite a base e a autura do terreno:\n");
            scanf("%f%f", &base, &altura);

        area = calc_area(altura, base);
        printf("A area do terreno eh:%.2f\n", area);
    }
    return 0;
}