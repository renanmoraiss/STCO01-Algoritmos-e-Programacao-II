int partition(int A[], int inicio, int fim) {
    int pivo = A[fim];
    int i = inicio - 1;
    int j;
    for (j = inicio; j < fim; j++) {
        if (A[j] <= pivo) {
            i++;
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[fim];
    A[fim] = temp;
    return i + 1;
}

void quickSort(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = partition(A, inicio, fim);
        quickSort(A, inicio, pivo - 1);
        quickSort(A, pivo + 1, fim);
    }
}