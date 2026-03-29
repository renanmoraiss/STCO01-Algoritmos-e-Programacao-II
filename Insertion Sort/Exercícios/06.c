#include <stdio.h>

void insertionSort(int v[], int k);

int main() {
    int vet[] = {5, 2, 9, 1, 5, 6};
    int tamanho = 6;
    insertionSort(vet, 3);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}

void insertionSort(int v[], int k) {
    for (int i = 1; i < k; i++) {
        int pivo = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > pivo) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = pivo;
    }
}