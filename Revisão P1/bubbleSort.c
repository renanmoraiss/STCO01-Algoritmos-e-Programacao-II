void bubbleSort(int A[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j+1]) {
                int aux = A[j+1];
                A[j+1] = A[j];
                A[j] = aux;
            }
        }
    }
}