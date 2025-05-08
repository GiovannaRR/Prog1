#include<stdio.h>

    void alunos(int *prog1, int *prog2, int tam1, int tam2){

        for(int i = 0; i < tam1; i++){
            for(int j = 0; j < tam2; j++){
                if(*(prog1+i)==*(prog2+j)){
                    printf("Os codigos dos alunos nas mesmas materias sao:%d\n", *(prog2+j));
                }
            }
        }
    }
int main(){

    int Prog1;
    int Prog2;

    printf("Digite a quantidade de alunos em prog1:\n");
        scanf("%d", &Prog1);

    int prog1[Prog1]; 

    printf("Digite o codigo dos alunos em prog1:\n");
    for(int i = 0; i < Prog1; i++){
        scanf("%d", &prog1[i]);
    }
     printf("Digite a quantidade de alunos em prog2:\n");
        scanf("%d", &Prog2);

    int prog2[Prog2];

    printf("Digite o codigo dos alunos em prog2:\n");
    for(int j = 0; j < Prog2; j++){
        scanf("%d", &prog2[j]);
    }

    alunos(prog1, prog2, Prog1, Prog2);
}