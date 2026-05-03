//Treino
#include <stdio.h>

int partition(int A[], int inicio, int fim);
void quickSort(int A[], int inicio, int fim);

int main() {
    int A[] = {5, 4, 3, 2, 1};
    size_t n = sizeof(A) / sizeof(A[0]);
    quickSort(A, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}

int partition(int A[], int inicio, int fim) {
    int pivo = A[fim];
    int i = inicio - 1;
    for (int j = inicio; j < fim; j++) {
        if (A[j] <= pivo) {
            i++;
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }
    int temp = A[fim];
    A[fim] = A[i + 1];
    A[i + 1] = temp;
    return i + 1;
}

void quickSort(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = partition(A, inicio, fim);
        quickSort(A, inicio, pivo - 1);
        quickSort(A, pivo + 1, fim);
    }
}