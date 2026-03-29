#include <stdio.h>

void insertionSort(int V[], int tam);

int main() {
    int vet[] = {3, 5, 2, 6, 1, 4};
    int tamanho = 6;
    insertionSort(vet, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

void insertionSort(int V[], int tam) {
    for (int i = 1; i < tam; i++) {
        int pivo = V[i];
        int j = i - 1;
        while (j >= 0 && V[j] > pivo) {
            V[j+1] = V[j];
            j--;    
        }
        V[j+1] = pivo;
    }
}