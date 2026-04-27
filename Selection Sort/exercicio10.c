//Treino
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int V[], int TAM, int X);

int main() {
    int vet[] = {10, 5, 20, 3};
    int tamanho = 4;
    int x = 8;
    selectionSort(vet, tamanho, x);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

void selectionSort(int V[], int TAM, int X) {
    for (int i = 0; i < TAM - 1; i++) {
        int indMenorElem = i;
        for (int j = i + 1; j < TAM; j++) {
            if (abs(V[j] - X) < abs(V[indMenorElem] - X)) {
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