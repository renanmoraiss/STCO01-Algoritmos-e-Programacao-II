//Treino
#include <stdio.h>

int selectionSort(int v[], int tam);

int main() {
    int v[] = {42, 7, 19, 88, 3, 56, 12, 91, 25, 64, 1, 37, 82, 10, 49, 5, 73, 22, 68, 15};
    int tamanho = 20;
    int contador = selectionSort(v, tamanho);
    printf("%d trocas\n", contador);
    for (int l = 0; l < tamanho; l++) {
        printf("%d ", v[l]);
    }
    return 0;
}

int selectionSort(int v[], int tam) {
    int contadorTrocas = 0;
    for (int i = 0; i < tam - 1; i++) {
        int indMenorElem = i;
        for (int j = i + 1; j < tam; j++) {
            if (v[j] < v[indMenorElem]) {
                indMenorElem = j;
            }
        }
        if (indMenorElem != i) {
            int aux = v[i];
            v[i] = v[indMenorElem];
            v[indMenorElem] = aux;
            contadorTrocas++;
        }
    }
    return contadorTrocas;
}