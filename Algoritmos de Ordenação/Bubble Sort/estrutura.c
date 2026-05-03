#include <stdio.h>

void bubbleSort(int *V, int TAM);

int main () {
    int V[] = {45, 12, 89, 3, 67, 23, 90, 34, 11, 56};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    bubbleSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    return 0;
}

void bubbleSort(int *V, int TAM) {
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - i - 1; j++) {
            if (V[j] > V[j+1]) {
                int aux = V[j+1];
                V[j+1] = V[j];
                V[j] = aux;
            }
        }
    }
}