#include <stdio.h>

void bubbleSort(int v[], int n);

int main() {
    int vet[] = {0, 1, 2, 3, 5, 4};
    int tam = 6;
    bubbleSort(vet, tam);
    return 0;
}

void bubbleSort(int v[], int n) {
    int flag;
    int contador = 0;
    int verificacao = 0;
    for (int i = 0; i < n; i++) {
        verificacao++;
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j+1]) {
                flag = 1;
                contador++;
                int auxiliar = v[j];
                v[j] = v[j+1];
                v[j+1] = auxiliar;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    printf("Total de verificacoes no vetor: %d\n", verificacao);
    printf("Total de trocas realizadas: %d\n", contador);
    for (int k = 0; k < n; k++) {
        printf("%d ", v[k]);
    }
}