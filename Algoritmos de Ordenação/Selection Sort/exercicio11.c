//Treino
#include <stdio.h>

void selectionSort(int A[], int n);

int main() {
    int v[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
    int tamanho = 16;
    selectionSort(v, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", v[k]);
    }
    return 0;
}

void selectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indMenorElem = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[indMenorElem]) {
                indMenorElem = j;
            }
        }
        if (indMenorElem != i) {
            int aux = A[i];
            A[i] = A[indMenorElem];
            A[indMenorElem] = aux;
        }
    }
}