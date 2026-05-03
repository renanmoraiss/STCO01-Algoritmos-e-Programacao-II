//Treino
#include <stdio.h>

void selectionSort(int V[], int N, int k);

int main() {
    int v[] = {5, 3, 4, 1, 2};
    int tamanho = 5;
    selectionSort(v, tamanho, 3);
    for (int t = 0; t < tamanho; t++) {
        printf("%d ", v[t]);
    }
    return 0;
}

void selectionSort(int V[], int N, int k) {
    for (int i = 0; i < k; i++) {
        int indMenorElem = i;
        for (int j = i + 1; j < N; j++) {
            if (V[j] < V[indMenorElem]) {
                indMenorElem = j;
            }
        }
        if (indMenorElem != i) {
            int aux = V[i];
            V[i] = V[indMenorElem];
            V[indMenorElem] = aux;
        }
    }
}