//Treino
#include <stdio.h>

int merge(int A[], int inicio, int metade, int fim);
int mergeSort(int A[], int inicio, int fim);

int main() {
    int A[] = {55, 40, 72, 90, 19};
    size_t N = sizeof(A) / sizeof(A[0]);
    int comparacoes = mergeSort(A, 0, 4);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    } printf("\n");
    printf("Comparacoes: %d\n", comparacoes);
    return 0;
}

int merge(int A[], int inicio, int metade, int fim) {
    int comparacoes = 0;
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
        comparacoes++;
        if (esq[i] <= dir[j]) {
            A[k++] = esq[i++];
        } else {
            A[k++] = dir[j++];
        }
    }
    while (i < l) {
        A[k++] = esq[i++];
    }
    while (j < r) {
        A[k++] = dir[j++];
    }
    return comparacoes;
}

int mergeSort(int A[], int inicio, int fim) {
    int comparacoes = 0;
    if (inicio < fim) {
        int metade = inicio + (fim - inicio) / 2;
        comparacoes += mergeSort(A, inicio, metade);
        comparacoes += mergeSort(A, metade + 1, fim);
        comparacoes += merge(A, inicio, metade, fim);
    }
    return comparacoes;
}