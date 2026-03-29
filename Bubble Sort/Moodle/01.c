#include <stdio.h>

void bubbleSort(int V[], int N);

int main() {
    int numeros[] = {10, -1, 3, 7, 2, 0, 5};
    int tam = 7;
    bubbleSort(numeros, tam);
    for (int k = 0; k < tam; k++) {
        printf("%d ", numeros[k]);
    }
    return 0;
}

void bubbleSort(int V[], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (V[j] > V[j+1]) {
                int aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
            }
        }
    }
}