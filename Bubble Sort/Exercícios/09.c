#include <stdio.h>

void bubbleSort(int v[], int n);
int buscaMaior(int v[], int n);
int buscaMenor(int v[], int n);

int main() {
    int vet[] = {42, 7, 103, 15, 88, 2, 54, 19, 77, 31, 6, 90, 25, 12, 63};
    int tamanho = 15;
    int maior = buscaMaior(vet, tamanho);
    int menor = buscaMenor(vet, tamanho);
    bubbleSort(vet, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    } printf("\n");
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    return 0;
}

int buscaMaior(int v[], int n) {
    int maiorElemento = v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] > maiorElemento) {
            maiorElemento = v[i];
        }
    }
    return maiorElemento;
}

int buscaMenor(int v[], int n) {
    int menorElemento = v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] < menorElemento) {
            menorElemento = v[i];
        }
    }
    return menorElemento;
}

void bubbleSort(int v[], int n) {
    int flag;
    int contador = 0;
    for (int i = 0; i < n; i++) {
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
    printf("Total de trocas efetuadas: %d\n", contador);
}