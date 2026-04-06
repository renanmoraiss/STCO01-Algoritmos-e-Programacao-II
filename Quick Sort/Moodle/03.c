#include <stdio.h>

int quickSort(int A[], int inicio, int fim);
int particao(int A[], int* contador, int inicio, int fim);

int main() {
    int vet[] = {5, 2, 4, 6};
    int tamanho = 4;
    int contador = quickSort(vet, 0, 3);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    } printf("\n");
    printf("%d trocas\n", contador);
    return 0;
} 

int particao(int A[], int* contador, int inicio, int fim) {
    int pivo = A[fim];
    int i = inicio - 1;
    int j;
    for (j = inicio; j < fim; j++) {
        if (A[j] <= pivo) {
            i++;
            if (i != j) {
                (*contador)++;
                int aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    if(i + 1 != fim) {
        int temp = A[i + 1];
        A[i + 1] = A[fim];
        A[fim] = temp;
        (*contador)++;
    }
    return i + 1;
}

int quickSort(int A[], int inicio, int fim) {
    int contador = 0;
    if (inicio < fim) {
        int pivo = particao(A, &contador, inicio, fim);
        contador = contador + quickSort(A, inicio, pivo - 1);
        contador = contador + quickSort(A, pivo + 1, fim);
    }
    return contador;
}