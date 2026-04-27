//Treino
#include <stdio.h>

void selectionSort(int vet[], int tam);

int main() {
    int v[] = {37, 0, -1, -2, 100, 1, 5, 7, 9, 17};
    int tamanho = 10;
    selectionSort(v, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", v[k]);
    }
    return 0;
}

void selectionSort(int vet[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        int indiceMenorElem = i;
        for (int j = i + 1; j < tam; j++) {
            if (vet[j] < vet[indiceMenorElem]) {
                indiceMenorElem = j;
            }
        }
        if (indiceMenorElem != i) {
            int auxiliar = vet[i];
            vet[i] = vet[indiceMenorElem];
            vet[indiceMenorElem] = auxiliar;
        }
    }
}