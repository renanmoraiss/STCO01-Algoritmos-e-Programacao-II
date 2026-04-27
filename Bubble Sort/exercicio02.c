//Moodle
#include <stdio.h>

void bubbleSort(float numeros[], int tamanho);

int main() {
    float V[] = {4.54, 7.60, 5.45, -1.23,23.78,12.99, 9.87};
    size_t TAM = sizeof(V) / sizeof(V[0]);
    bubbleSort(V, TAM);
    return 0;
}

void bubbleSort(float numeros[], int tamanho) {
    int trocou;
    int trocasRealizadas = 0;
    for (int i = 0; i < tamanho - 1; i++) {
        trocou = 0;
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (numeros[j] < numeros[j+1]) {
                float aux = numeros[j+1];
                numeros[j+1] = numeros[j];
                numeros[j] = aux;
                trocou = 1;
                trocasRealizadas++;
            }
        }
        if (trocou == 0) {
            break;
        }
    }
    for (int i = 0; i < tamanho; i++) {
        printf("%0.2f ", numeros[i]);
    } printf("\n");
    printf("Foram efetuadas %d troca(s)", trocasRealizadas);
}