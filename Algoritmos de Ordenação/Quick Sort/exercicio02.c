//Moodle
#include <stdio.h>

int partition(int A[], int inicio, int fim);
void quickSort(int A[], int inicio, int fim);

int main() {
    int A[] = {4, 2, 4, 3, 2, 1};
    size_t n = sizeof(A) / sizeof(A[0]);
    quickSort(A, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}

int partition(int A[], int inicio, int fim) {
    int pivo = A[inicio];
    int i = inicio + 1;
    int j = fim;
    while (i <= j) {
        while (i <= j && A[i] <= pivo) {
            i++;
        }
        while (j >= i && A[j] > pivo) {
            j--;
        }
        if (i < j) {
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }
    int temp = A[inicio];
    A[inicio] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = partition(A, inicio, fim);
        quickSort(A, inicio, pivo - 1);
        quickSort(A, pivo + 1, fim);
    }
}