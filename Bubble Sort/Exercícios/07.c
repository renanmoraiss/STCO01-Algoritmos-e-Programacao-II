#include <stdio.h>

int bubbleSort(int v[], int n);

int main() {
    int vet[] = {5, 2, 4, 7, 1};
    int tam = 5;
    int trocasEfetuadas = 0;
    trocasEfetuadas = bubbleSort(vet, tam);
    printf("Total de trocas efetuadas: %d\n", trocasEfetuadas);
    for (int k = 0; k < tam; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

int bubbleSort(int v[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j+1]) {
                contador++;
                int auxiliar = v[j];
                v[j] = v[j+1];
                v[j+1] = auxiliar;
            }
        }
    }
    return contador;
}