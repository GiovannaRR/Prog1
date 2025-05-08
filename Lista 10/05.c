#include <stdio.h>

int somaArray(int array[], int n) {

    if (n == 0) {
        return 0;
    }

    return array[n - 1] + somaArray(array, n - 1);
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int resultado = somaArray(array, 10);
    printf("A soma dos elementos do array e: %d\n", resultado);

    return 0;
}
