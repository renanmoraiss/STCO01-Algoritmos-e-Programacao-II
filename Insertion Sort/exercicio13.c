//HackerRank
void insertionSort(int N, int arr[]) {
    int pivot, j;
    for (int i = 1; i < N; i++) {
        pivot = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > pivot) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
}