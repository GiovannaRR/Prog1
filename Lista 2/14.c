#include<stdio.h>

int main(){

    int tipo_veiculo;
    float km, consumo;

    printf("Digite a distsncia percorrida em km:\n");
        scanf("%f", &km);
    
    printf("Digite o modelo do veiculo (1, 2 ou 3):\n");
        scanf("%d", &tipo_veiculo);

    if (tipo_veiculo == 1)
    {
        consumo = km/15;
        printf("Aquantidade de litros gastos com o veiculo A foi de %.2f", consumo);
    }
    else if (tipo_veiculo == 2)
    {
        consumo = km/12;
        printf("Aquantidade de litros gastos com o veiculo B foi de %.2f", consumo);
    }
    else if (tipo_veiculo == 3)
    {
        consumo = km/10;
        printf("Aquantidade de litros gastos com o veiculo C foi de %.2f", consumo);
    }
    
    return 0;
}