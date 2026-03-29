#include <stdio.h>

void insertionSort(int A[], int n);

int main() {
    int vet[] = {18, 21, 3, 2, 1, 4, 7, 6, 10, 12};
    int tam = 10;
    insertionSort(vet, tam);
    for (int k = 0; k < tam; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int pivo = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > pivo) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = pivo;
    }
}