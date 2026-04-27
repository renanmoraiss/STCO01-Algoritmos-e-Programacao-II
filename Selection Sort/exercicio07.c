//Treino
#include <stdio.h>

int selectionSort(int V[], int N);

int main() {
    int v[] = {3, 2, 4, 5, 1};
    int tamanho = 5;
    int contador = selectionSort(v, tamanho);
    printf("%d comparacoes\n", contador);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", v[k]);
    }
    return 0;
}

int selectionSort(int V[], int N) {
    int contadorComparacoes = 0;
    for (int i = 0; i < N - 1; i++) {
        int indMenorElem = i;
        for (int j = i + 1; j < N; j++) {
            contadorComparacoes++;
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
    return contadorComparacoes;
}