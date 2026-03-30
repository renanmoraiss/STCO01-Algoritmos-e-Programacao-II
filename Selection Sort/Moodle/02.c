#include <stdio.h>

int selectionSort(int A[], int n);

int main() {
    int v[] = {9, 7, 1, 2, 3};
    int tamanho = 5;
    int contador = selectionSort(v, tamanho);
    printf("%d trocas\n", contador);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", v[k]);
    }
    return 0;
}

int selectionSort(int A[], int n) {
    int i, j, indMenorElem, contador = 0;
    for (i = 0; i < n - 1; i++) {
        indMenorElem = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[indMenorElem]) {
                indMenorElem = j;
            }
        }
        if (indMenorElem != i) {
            int aux = A[i];
            A[i] = A[indMenorElem];
            A[indMenorElem] = aux;
            contador++;
        }
    }
    return contador;
}