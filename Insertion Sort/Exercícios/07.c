#include <stdio.h>

void insertionSort(int A[], int n);

int main() {
    int vet[] = {9, 2, 1, 6, 5, 7, 12, 21, 30};
    int tamanho = 9;
    insertionSort(vet, tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}

void insertionSort(int A[], int n) {
    int i;
    for (i = 1; i < n; i++) {
        int pivo = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > pivo) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = pivo;
    }
}