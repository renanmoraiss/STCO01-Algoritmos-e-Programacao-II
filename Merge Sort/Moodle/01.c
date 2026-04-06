#include <stdio.h>

void merge(int vet[], int inicio, int meio, int fim);
void mergeSort(int vet[], int inicio, int fim);

int main() {
    int v[] = {1, 5, 3, 4, 7, 2};
    int tamanho = 6;
    return 0;
}

void merge(int A[], int inicio, int meio, int fim) {
    int i, j, l;
    int n1 = (meio - inicio) + 1;
    int n2 = (fim - meio);
    int esq[n1];
    int dir[n2];

    for (i = 0; i < n1; i++) {
        esq[i] = A[inicio + i];
    }

    for (j = 0; j < n2; j++) {
        dir[j] = A[meio + 1 + j];
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
    } while (j < n2) {
        A[l++] = dir[j++];
    }
}

void mergeSort(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(A, inicio, meio);
        mergeSort(A, meio + 1, fim);
        merge(A, inicio, meio, fim);
    }
}