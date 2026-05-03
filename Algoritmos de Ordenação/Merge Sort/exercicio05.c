//Treino
#include <stdio.h>

void merge(int A[], int inicio, int metade, int fim);
void mergeSort(int A[], int inicio, int fim);

int main() {
    int A[] = {10, -3, 7, 0, -1, 5, 2};
    int n = sizeof(A) / sizeof(A[0]);
    mergeSort(A, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}

void merge(int A[], int inicio, int metade, int fim) {
    int i, j, k;
    int l = (metade - inicio) + 1;
    int r = fim - metade;
    int esq[l];
    int dir[r];
    for (i = 0; i < l; i++) {
        esq[i] = A[inicio + i];
    }
    for (j = 0; j < r; j++) {
        dir[j] = A[metade + j + 1];
    }
    i = 0, j = 0, k = inicio;
    while (i < l && j < r) {
        if (esq[i] <= dir[j]) {
            A[k++] = esq[i++];
        }
        else {
            A[k++] = dir[j++];
        }
    }
    while (i < l) {
        A[k++] = esq[i++];
    }
    while (j < r) {
        A[k++] = dir[j++];
    }
}

void mergeSort(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int metade = inicio + (fim - inicio) / 2;
        mergeSort(A, inicio, metade);
        mergeSort(A, metade + 1, fim);
        merge(A, inicio, metade, fim);
    }
}