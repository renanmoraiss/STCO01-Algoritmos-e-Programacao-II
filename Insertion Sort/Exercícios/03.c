#include <stdio.h>

void insertionSort(int v[], int n);

int main() {
    int vet[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tamanho = 10;
    insertionSort(vet, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

void insertionSort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int pivo = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > pivo) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = pivo;
    }
}