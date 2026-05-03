//Treino
#include <stdio.h>

void insertionSort(int A[], int N);

int main() {
    int v[] = {5, 2, 7, 1, 4};
    int tamanho = 5;
    insertionSort(v, tamanho);
    for (int r = 0; r < tamanho; r++) {
        printf("%d ", v[r]);
    }
    return 0;
}

void insertionSort(int A[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int indMenorElem = i;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[indMenorElem]) {
                indMenorElem = j;
            }
        }
        if (indMenorElem != i) {
            int auxiliar = A[i];
            A[i] = A[indMenorElem];
            A[indMenorElem] = auxiliar;
        }
    }
}