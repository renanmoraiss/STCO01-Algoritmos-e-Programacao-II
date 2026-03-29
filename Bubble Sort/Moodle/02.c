#include <stdio.h>

void bubbleSort(float numeros[], int tamanho);

int main() {
    float vet[] = {4.54, 7.60, 5.45, -1.23,23.78,12.99, 9.87};
    int tam = 7;
    bubbleSort(vet, tam);
    return 0;
}

void bubbleSort(float numeros[], int tamanho) {
    int contadorTrocas = 0;
    int vetorOrdenado;
    for (int i = 0; i < tamanho; i++) {
        int vetorOrdenado = 0;
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (numeros[j] < numeros[j+1]) {
                float aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
                contadorTrocas++;
                vetorOrdenado = 1;
            }
        } if (vetorOrdenado == 0) {
            break;
        }
    }
    for (int k = 0; k < tamanho; k++) {
        printf("%.2f ", numeros[k]);
    } printf("\n");
    printf("Foram efetuadas %d troca(s)\n", contadorTrocas);
}