//Treino
#include <stdio.h>

int merge(int A[], int inicio, int metade, int fim);
int mergeSort(int A[], int inicio, int fim);

int main() {
    int A[] = {15, 3, 89, 42, 1, 77, 23, 10, 56, 12, 9, 34};
    int N = sizeof(A) / sizeof(A[0]);
    int deslocamentos = mergeSort(A, 0, 11);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    } printf("\n");
    printf("Deslocamentos: %d", deslocamentos);
    return 0;
}

int merge(int A[], int inicio, int metade, int fim) {
    int deslocamentos = 0;
    int i, j, k;
    int l = (metade - inicio) + 1;
    int r = fim - metade;
    int left[l];
    int right[r];
    for (i = 0; i < l; i++) {
        left[i] = A[inicio + i];
    }
    for (j = 0; j < r; j++) {
        right[j] = A[metade + j + 1];
    }
    i = 0, j = 0, k = inicio;
    while (i < l && j < r) {
        if (left[i] <= right[j]) {
            A[k++] = left[i++];
            deslocamentos++;
        } else {
            A[k++] = right[j++];
            deslocamentos++;
        }
    }
    while (i < l) {
        A[k++] = left[i++];
        deslocamentos++;
    }
    while (j < r) {
        A[k++] = right[j++];
        deslocamentos++;
    }
    return deslocamentos;
}

int mergeSort(int A[], int inicio, int fim) {
    int deslocamentos = 0;
    if (inicio < fim) {
        int metade = inicio + (fim - inicio) / 2;
        deslocamentos += mergeSort(A, inicio, metade);
        deslocamentos += mergeSort(A, metade + 1, fim);
        deslocamentos += merge(A, inicio, metade, fim);
    }
    return deslocamentos;
}