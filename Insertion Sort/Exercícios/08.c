#include <stdio.h>

void insertionSort(int A[], int n);

int main() {
    int vet[] = {9, 8, 0, -2, -1, 10, 21, 30, 45, 100};
    int tamanho = 10;
    insertionSort(vet, tamanho);
    return 0;
}

void insertionSort(int A[], int n) {
    int i;
    int contador = 0;
    for (i = 1; i < n; i++) {
        int pivo = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > pivo) {
            A[j+1] = A[j];
            j--;
            contador++;
        }
        A[j+1] = pivo;
    }
    int k;
    for (k = 0; k < n; k++) {
        printf("%d ", A[k]);
    } printf("\n");
    printf("movimentos: %d", contador);
}