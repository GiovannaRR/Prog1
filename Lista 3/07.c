#include<stdio.h>

int main(){

    int n = 1;

    while(n <= 50 && n > 0){

        if(n % 3 == 0)
        {
            printf("%d\n", n);
        }
        n++;
    }
    return 0;
}