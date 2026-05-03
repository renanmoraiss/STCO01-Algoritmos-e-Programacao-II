//Moodle
#include <stdio.h>

int insertionSort(int A[], int n);

int main() {
    int V[] = {-5, -1, 0, 3, 2, -2, 4};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    int movimentacoes = insertionSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    } printf("\n");
    printf("movimentos: %d", movimentacoes);
    return 0;
}

int insertionSort(int A[], int n) {
    int pivot, j;
    int movimentacoes = 0;
    for (int i = 1; i < n; i++) {
        pivot = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > pivot) {
            A[j+1] = A[j];
            j--;
            movimentacoes++;
        }
        A[j+1] = pivot;
    }
    return movimentacoes;
}