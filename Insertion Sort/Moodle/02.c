#include <stdio.h>

void insertionSort(int A[], int n);

int main() {
    int vet[] = {3, 5, 2, 6, 1, 4};
    int tamanho = 6;
    insertionSort(vet, tamanho);
    return 0;
}

void insertionSort(int A[], int n) {
    int totalMovimentacoes = 0;
    for (int i = 1; i < n; i++) {
        int pivo = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > pivo) {
            A[j+1] = A[j];
            totalMovimentacoes++;
            j--;
        }
        A[j+1] = pivo;
    }
    for (int k = 0; k < n; k++) {
        printf("%d ", A[k]);
    } printf("\n");
    printf("movimentos: %d", totalMovimentacoes);
}