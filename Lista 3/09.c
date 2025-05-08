#include <stdio.h>

int main() {
    int num;
    int divisor = 2;
    int primo = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (divisor < num) {
        if (num % divisor == 0) {
            primo = 0; 
            break;
        }
        divisor++;
    }

    if (primo == 1 && num > 1) {
        printf("%d eh primo.\n", num);
    } else {
        printf("%d nao eh primo.\n", num);
    }

    return 0;
}

//#include <stdio.h>

//int main(){

    //int n = 0;
    
        //printf("Digite um numero:\n");
            //scanf("%d", &n);

        //if(n % 2 == 0)
        //{
            //printf("%d nao eh primo\n", n);
        //}
        //else if(n % n == 0 && n % 1 == 0)
        //{
            //printf("%d eh primo\n", n);
        //}

    //return 0;
//}