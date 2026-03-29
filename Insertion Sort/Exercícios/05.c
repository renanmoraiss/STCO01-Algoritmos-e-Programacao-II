#include <stdio.h>

int insertionSort(int v[], int n);

int main() {
    int vet[] = {5, 2, 4, 7, 1, 3, 10};
    int tamanho = 7;
    int contador = insertionSort(vet, tamanho);
    printf("Total de deslocamentos: %d\n", contador);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

int insertionSort(int v[], int n) {
    int contador = 0;
    for (int i = 1; i < n; i++) {
        int pivo = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > pivo) {
            contador++;
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = pivo;
    }
    return contador;
}