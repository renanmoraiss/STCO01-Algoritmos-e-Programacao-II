//Treino
#include <stdio.h>

void selectionSort(int V[], int N);

int main() {
    int V[] = {5, 2, 4, 6, 1, 3, 10, 11};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    selectionSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    return 0;
}

void selectionSort(int V[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (V[j] < V[min]) {
                min = j;
            }
        }
        int aux = V[min];
        V[min] = V[i];
        V[i] = aux;
    }
}