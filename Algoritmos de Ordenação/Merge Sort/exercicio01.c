//Moodle
#include <stdio.h>

void merge(int A[], int inicio, int metade, int fim);
void mergeSort(int A[], int inicio, int fim);

int main() {
    int A[] = {10, -3, 7, 0, -1, 5, 2};
    size_t N = sizeof(A) / sizeof(A[0]);
    mergeSort(A, 0, 6);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}

void merge(int A[], int inicio, int metade, int fim) {
    int i, j, l;
    int n1 = metade - inicio + 1;
    int n2 = fim - metade;
    int esq[n1];
    int dir[n2];
    for (i = 0; i < n1; i++) {
        esq[i] = A[inicio + i];
    }
    for (j = 0; j < n2; j++) {
        dir[j] = A[metade + j + 1];
    }
    i = 0, j = 0, l = inicio;
    while (i < n1 && j < n2) {
        if (esq[i] <= dir[j]) {
            A[l++] = esq[i++];
        } else {
            A[l++] = dir[j++];
        }
    }
    while (i < n1) {
        A[l++] = esq[i++];
    }
    while (j < n2) {
        A[l++] = dir[j++];
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