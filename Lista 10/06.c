#include <stdio.h>

int somaArray(int arr[], int n) {
    if (n < 0) {
        return 0;
    }
    return arr[n] + somaArray(arr, n - 1);
}

int main() {
    int n;
    printf("Digite o numero de elementos do array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int resultado = somaArray(arr, n - 1);  
    printf("A soma dos elementos do array e: %d\n", resultado);
    
    return 0;
}
