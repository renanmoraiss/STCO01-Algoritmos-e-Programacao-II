//Treino
#include <stdio.h>

void insertionSort(int V[], int N);

int main() {
    int V[] = {3, 5, 2, 6, 1, 4};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    insertionSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    return 0;
}

void insertionSort(int V[], int N) {
    int pivot, j;
    int comparacoes = 0;
    int trocas = 0;
    for (int i = 1; i < N; i++) {
        pivot = V[i];
        j = i - 1;
        while (j >= 0 && V[j] > pivot) {
            V[j+1] = V[j];
            j--;
            trocas++;
            comparacoes++;
        }
        if (j >= 0) {
            comparacoes++;
        }
        V[j+1] = pivot;
    }
    printf("Trocas: %d\n", trocas);
    printf("Comparacoes: %d\n", comparacoes);
}