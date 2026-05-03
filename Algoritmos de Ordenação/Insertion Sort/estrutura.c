#include <stdio.h>

void insertionSort(int V[], int TAM);

int main() {
    int V[] = {45, 12, 89, 3, 67, 23, 90, 34, 11, 56};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    insertionSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    return 0;
}

void insertionSort(int V[], int TAM) {
    int pivot, j;
    for (int i = 1; i < TAM; i++) {
        pivot = V[i];
        j = i - 1;
        while (j >= 0 && V[j] > pivot) {
            V[j+1] = V[j];
            j--;
        }
        V[j+1] = pivot;
    }
}