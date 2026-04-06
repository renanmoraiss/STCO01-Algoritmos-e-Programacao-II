#include <stdio.h>

void quickSort(int A[], int inicio, int fim);
int particao(int A[], int inicio, int fim);

int main() {
    int vet[] = {2, 1, 3, 4, 6, 5};
    int tamanho = 6;
    quickSort(vet, 0, 5);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
} 

int particao(int A[], int inicio, int fim) {
    int pivo = A[fim];
    int i = inicio - 1;
    int j;
    for (j = inicio; j < fim; j++) {
        if (A[j] <= pivo) {
            i++;
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[fim];
    A[fim] = temp;
    return i + 1;
}

void quickSort(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = particao(A, inicio, fim);
        quickSort(A, inicio, pivo - 1);
        quickSort(A, pivo + 1, fim);
    }
}