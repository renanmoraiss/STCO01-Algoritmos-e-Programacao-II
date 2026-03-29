#include <stdio.h>

void bubbleSort(int V[], int tam);

int main() {
    int vet[] = {2, 3, 4, 5, 6, 7};
    int tamanho = 6;
    bubbleSort(vet, tamanho);
    return 0;
}

void bubbleSort(int V[], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            if (V[j] < V[j+1]) {
                int aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
            }
        }
    }
    for (int k = 0; k < tam; k++) {
        printf("V[%d] = %d ", k, V[k]);
    }
}