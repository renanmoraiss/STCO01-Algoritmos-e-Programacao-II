#include <stdio.h>

void bubbleSort(int vet[], int tam);

int main() {
    int V[] = {3, 2, 1};
    int tamanho = 3;
    bubbleSort(V, tamanho);
    return 0;
}

void bubbleSort(int vet[], int tam) {
    int contadorTrocas = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            if (vet[j] > vet[j+1]) {
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
                contadorTrocas++;
            }
        }
    }
    printf("%d trocas foram efetuadas!\n", contadorTrocas);
}