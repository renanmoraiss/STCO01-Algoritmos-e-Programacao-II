#include <stdio.h>

void bubbleSort(int v[], int n);

int main() {
    int vet[] = {5, 8, 3, 2, 7, 4};
    int tamanho = 6;
    bubbleSort(vet, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] % 2 == 0) {
                for (int k = j; k < n; k++) {
                    if (v[k] % 2 == 0) {
                        if(v[j] > v[k]) {
                            int auxiliar = v[j];
                            v[j] = v[k];
                            v[k] = auxiliar;
                        }
                    }
                }
            }
        }
    }
}