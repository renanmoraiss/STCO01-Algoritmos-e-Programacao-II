//Moodle
#include <stdio.h>

void bubbleSort(int V[], int N);

int main() {
    int V[] = {4, 7, 5};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    bubbleSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    return 0;
}

void bubbleSort(int V[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (V[j] > V[j+1]) {
                int aux = V[j+1];
                V[j+1] = V[j];
                V[j] = aux;
            }
        }
    }
}