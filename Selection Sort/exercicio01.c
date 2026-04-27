//Moodle
#include <stdio.h>

void selectionSort(int V[], int TAM);

int main() {
    int V[] = {10, -3, 7, 0, -1, 5, 2};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    selectionSort(V, TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    return 0;
}

void selectionSort(int V[], int TAM) {
    for (int i = 0; i < TAM - 1; i++) {
        int indexMenor = i;
        for (int j = i + 1; j < TAM; j++) {
            if (V[j] < V[indexMenor]) {
                indexMenor = j;
            }
        }
        int aux = V[indexMenor];
        V[indexMenor] = V[i];
        V[i] = aux;
    }
}