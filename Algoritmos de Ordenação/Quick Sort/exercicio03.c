//Moodle
#include <stdio.h>

int partition(int A[], int *trocas, int inicio, int fim);
int quickSort(int A[], int inicio, int fim);

int main() {
    int A[] = {10, -3, 7, 0, -1, 5, 2};
    size_t N = sizeof(A) / sizeof(A[0]);
    int trocas = quickSort(A, 0, N - 1);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    } printf("\n");
    printf("%d trocas\n", trocas);
    return 0;
}

int partition(int A[], int *trocas, int inicio, int fim) {
    int pivo = A[fim];
    int i = inicio - 1;
    for (int j = inicio; j < fim; j++) {
        if (A[j] <= pivo) {
            i++;
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
            (*trocas)++;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[fim];
    A[fim] = temp;
    (*trocas)++;
    return i + 1;
}

int quickSort(int A[], int inicio, int fim) {
    int trocas = 0;
    if (inicio < fim) {
        int pivo = partition(A, &trocas, inicio, fim);
        trocas += quickSort(A, inicio, pivo - 1);
        trocas += quickSort(A, pivo + 1, fim);
    }
    return trocas;
}