//HackerRank
int introTutorial(int V, int arr_count, int* arr) {
    int value_to_find_index = 0;
    for (int i = 0; i < arr_count - 1; i++) {
        for (int j = 0; j < arr_count - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int aux = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = aux;
            }
        }
    }
    for (int k = 0; k < arr_count; k++) {
        if (arr[k] == V) {
            value_to_find_index = k;
        }
    }
    return value_to_find_index;
}