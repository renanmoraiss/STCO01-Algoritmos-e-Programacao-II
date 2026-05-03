//Treino
#include <stdio.h>

void selectionSort(int V[], int TAM);

int main() {
    int v[] = {-1, -3, -9, 0, 10, 17, 8, 2, 1, 22, 13};
    int tamanho = 11;
    selectionSort(v, tamanho);
    return 0;
}

void selectionSort(int V[], int TAM) {
    for (int i = 0; i < TAM - 1; i++) {
        int indMenorElem = i;
        for (int j = i + 1; j < TAM; j++) {
            if (V[j] < V[indMenorElem]) {
                indMenorElem = j;
            }
        }
        if (indMenorElem != i) {
            int auxiliar = V[i];
            V[i] = V[indMenorElem];
            V[indMenorElem] = auxiliar;
        }
        for (int k = 0; k < TAM; k++) {
            printf("%d ", V[k]);
        } printf("\n");
    }
}