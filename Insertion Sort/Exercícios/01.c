#include <stdio.h>

void insertionSort(int A[], int N);

int main() {
    int vet[] = {5, 2, 4, 6};
    int tamanho = 4;
    insertionSort(vet, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

void insertionSort(int A[], int N) {
    for (int i = 1; i < N; i++) {
        int pivo = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > pivo) {
            A[j+1] = A[j];
            j--;
        } 
        A[j+1] = pivo;
    }
}