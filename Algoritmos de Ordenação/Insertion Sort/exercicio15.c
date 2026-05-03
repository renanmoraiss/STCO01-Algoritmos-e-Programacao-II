//HackerRank
int runningTime(int arr_count, int* arr) {
    int pivot, j;
    int shifts = 0;
    for (int i = 1; i < arr_count; i++) {
        pivot = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > pivot) {
            arr[j+1] = arr[j];
            j--;
            shifts++;
        }
        arr[j+1] = pivot;
    }
    return shifts;
}