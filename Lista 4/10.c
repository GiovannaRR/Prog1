#include<stdio.h>

    void vogal(char letra){
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            printf("Eh vogal");
        }
        else if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
            printf("Eh vogal");
        }
        else{
            printf("Nao eh vogal");
        }
    }
int main(){

    char letra;

    printf("Digite uma letra:");
        scanf(" %c", &letra);
    
    vogal(letra);

    return 0;
}