#include <stdio.h>

void quickSort(int A[], int inicio, int fim);
int particao(int A[], int inicio, int fim);

int main() {
    int vet[] = {2, 1, 3, 4, 6, 5};
    int tamanho = 6;
    quickSort(vet, 0, 5);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    } printf("\n");
    return 0;
} 

int particao(int A[], int inicio, int fim) {
    int pivo = A[inicio];
    int i = inicio + 1;
    int j = fim;
    while (i <= j) {
        while (i <= j && A[i] <= pivo ) {
            i++;
        }
        while (j >= i && A[j] > pivo) {
            j--;
        }
        if (i < j) {
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }
    int temp = A[inicio];
    A[inicio] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = particao(A, inicio, fim);
        quickSort(A, inicio, pivo - 1);
        quickSort(A, pivo + 1, fim);
    }
}