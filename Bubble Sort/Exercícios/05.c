#include <stdio.h>

void bubbleSort(int v[], int n);

int main() {
    int vet[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tam = 10;
    bubbleSort(vet, tam);
    for (int k = 0; k < tam; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j+1]) {
                int auxiliar = v[j];
                v[j] = v[j+1];
                v[j+1] = auxiliar;
            }
        }
    }
}