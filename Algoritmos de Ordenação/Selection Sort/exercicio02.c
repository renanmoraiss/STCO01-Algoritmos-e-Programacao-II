//Moodle
#include <stdio.h>

int selectionSort(int A[], int n);

int main() {
    int V[] = {1, 2, 3, 4, 5};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    int swaps = selectionSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    } printf("\n");
    printf("%d trocas", swaps);
    return 0;
}

int selectionSort(int A[], int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int indexMenor = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[indexMenor]) {
                indexMenor = j;
            }
        }
        if (indexMenor != i) {
            int aux = A[indexMenor];
            A[indexMenor] = A[i];
            A[i] = aux;
            swaps++;
        }
    }
    return swaps;
}