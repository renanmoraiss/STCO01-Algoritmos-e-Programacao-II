//Moodle
#include <stdio.h>

void insertionSort(int A[], int n);

int main() {
    int V[] = {10, -3, 7, 0, -1, 5, 2, -3};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    insertionSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    return 0;
}

void insertionSort(int A[], int n) {
    int pivot, j;
    for (int i = 1; i < n; i++) {
        pivot = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > pivot) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = pivot;
    }
}