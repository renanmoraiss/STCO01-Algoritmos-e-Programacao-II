//Treino
#include <stdio.h>

void merge(int A[], int inicio, int metade, int fim, int *comparacoes, int *deslocamentos);
void mergeSort(int A[], int inicio, int fim, int *comparacoes, int *deslocamentos);

int main() {
    int A[] = {42, 7, 15, 3, 28, 9, 51, 1, 36, 14};
    int tam = sizeof(A) / sizeof(A[0]);
    int comparacoes = 0;
    int deslocamentos = 0;
    mergeSort(A, 0, 9, &comparacoes, &deslocamentos);
    for (int i = 0; i < tam; i++) {
        printf("%d ", A[i]);
    } printf("\n");
    printf("Comparacoes: %d\n", comparacoes);
    printf("Deslocamentos: %d\n", deslocamentos);
    return 0;
}

void merge(int A[], int inicio, int metade, int fim, int *comparacoes, int *deslocamentos) {
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
        (*comparacoes)++;
        if (left[i] <= right[j]) {
            A[k++] = left[i++];
            (*deslocamentos)++;
        } else {
            A[k++] = right[j++];
            (*deslocamentos)++;
        }
    }
    while (i < l) {
        A[k++] = left[i++];
        (*deslocamentos)++;
    }
    while (j < r) {
        A[k++] = right[j++];
        (*deslocamentos)++;
    }
}

void mergeSort(int A[], int inicio, int fim, int *comparacoes, int *deslocamentos) {
    if (inicio < fim) {
        int metade = inicio + (fim - inicio) / 2;
        mergeSort(A, inicio, metade, comparacoes, deslocamentos);
        mergeSort(A, metade + 1, fim, comparacoes, deslocamentos);
        merge(A, inicio, metade, fim, comparacoes, deslocamentos);
    }
}