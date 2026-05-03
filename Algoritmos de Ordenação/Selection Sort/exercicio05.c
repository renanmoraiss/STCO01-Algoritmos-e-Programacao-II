//Treino
#include <stdio.h>

void selectionSort(int V[], int N);

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;
    selectionSort(v, tamanho);
    for (int p = 0; p < tamanho; p++) {
        printf("%d ", v[p]);
    }
    return 0;
}

void selectionSort(int V[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int indMaiorElem = i;
        for (int j = i + 1; j < N; j++) {
            if (V[j] > V[indMaiorElem]) {
                indMaiorElem = j;
            }
        }
        if (indMaiorElem != i) {
            int auxiliar = V[i];
            V[i] = V[indMaiorElem];
            V[indMaiorElem] = auxiliar;
        }
    }
}