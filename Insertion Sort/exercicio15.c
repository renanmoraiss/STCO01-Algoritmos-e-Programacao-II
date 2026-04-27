//HackerRank
int findMedian(int arr_count, int* arr) {
    int pivot, j;
    for (int i = 1; i < arr_count; i++) {
        pivot = arr[i];
        j = i -1;
        while (j >= 0 && arr[j] > pivot) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;
    }
    if (arr_count % 2 != 0) {
        int indexElem = arr_count / 2;
        return arr[indexElem];
    } else {
        int indexElem = arr_count / 2;
        int indexAnotherElem = (arr_count-1)/2;
        return (arr[indexElem]+arr[indexAnotherElem])/2;
    }
}