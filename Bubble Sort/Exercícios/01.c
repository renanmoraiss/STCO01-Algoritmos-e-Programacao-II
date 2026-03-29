#include <stdio.h>

void bubbleSort(int vet[], int tam);

int main() {
    int V[] = {7, 4, 5, 2};
    int tamanho = 4;
    bubbleSort(V, tamanho);
    return 0;
}

void bubbleSort(int vet[], int tam) {
    int contadorTrocas = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            if (vet[j] > vet[j+1]) {
                contadorTrocas++;
                int auxiliar = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = auxiliar;
                printf("Troca %d:\n", contadorTrocas);
                for (int k = 0; k < tam; k++) {
                    printf("a[%d] = %d ", k, vet[k]);
                } printf("\n");
            }
        }
    } printf("\n");
    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d ", i, vet[i]);
    }
}