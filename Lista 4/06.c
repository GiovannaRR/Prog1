#include<stdio.h>
    
    float imc(float peso, float altura){
        float IMC = peso/(altura*altura);
        return IMC;
    }

int main(){

    float peso = 0, altura = 0;
    float IMC;

    printf("Digite seu peso em quilos:\n");
        scanf("%f", &peso);
    printf("Digite sua altura em metros:\n");
        scanf("%f", &altura);
    
    IMC = imc(peso, altura);

    if (IMC < 18.5){
        printf("Abaixo do peso");
    }
    if (IMC >= 18.5 && IMC <= 24.9 ){
        printf("Peso normal");
    }
    if (IMC >= 25 && IMC <= 29.9){
        printf("sobrepeso");
    }
    if (IMC >= 30){
        printf("Obeso");
    }
    printf("\nSeu IMC eh: %.2f", IMC);

    return 0;
}