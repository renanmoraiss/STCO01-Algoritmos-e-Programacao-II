void insertionSort(int A[], int N) {
    int pivot, j;
    for (int i = 1; i < N; i++) {
        pivot = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > pivot) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = pivot;
    }
}