//HackerRank
void insertionSort2(int n, int arr_count, int* arr) {
    int pivot, j;
    for (int i = 1; i < n; i++) {
        pivot = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > pivot) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        } printf("\n");
    }
}