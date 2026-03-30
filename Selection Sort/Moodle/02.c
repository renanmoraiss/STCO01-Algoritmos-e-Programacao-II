#include <stdio.h>

int selectionSort(int A[], int n);

int main() {
    int v[] = {10, -3, 7, 0, -1, 5, 2};
    int tamanho = 7;
    int contador = selectionSort(v, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", v[k]);
    } printf("\n");
    printf("trocas: %d\n", contador);
    return 0;
}

int selectionSort(int A[], int n) {
    int i, j, min, contador = 0;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
            contador++;
        }
    }
    return contador;
}