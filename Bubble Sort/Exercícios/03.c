#include <stdio.h>

void bubbleSort(int V[], int N);

int main() {
    int vet[] = {10, 7, 3, 2, 5, 6, 18, 21};
    int tamanho = 8;
    bubbleSort(vet, tamanho);
    return 0;
}

void bubbleSort(int V[], int N) {
    int trocou;
    for (int i = 0; i < N; i++) {
        trocou = 0;
        for (int j = 0; j < N - 1 - i; j++) {
            if (V[j] > V[j+1]) {
                int aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
                trocou = 1;
            }
        } if (trocou == 0) {
            printf("Vetor ordenado!\n");
            break;
        }
    }
    for (int k = 0; k < N; k++) {
        printf("V[%d] = %d ", k, V[k]);
    }
}