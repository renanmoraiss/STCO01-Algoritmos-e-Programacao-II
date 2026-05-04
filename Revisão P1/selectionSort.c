void selectionSort(int A[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        int aux = A[i];
        A[i] = A[min];
        A[min] = aux;
    }
}