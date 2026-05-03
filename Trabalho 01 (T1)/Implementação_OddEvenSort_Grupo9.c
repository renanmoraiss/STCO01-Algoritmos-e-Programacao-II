#include <stdio.h>

void OddEvenSort(int A[], int tam);

int main() {
    int V[] = {7, 2, 5, 1, 8, 4};
    int TAM = sizeof(V) / sizeof(V[0]);
    OddEvenSort(V, TAM);
    printf("Vetor ordenado:\n");
    for (int k = 0; k < TAM; k++) {
        printf("%d ", V[k]);
    }
    return 0;
}

void OddEvenSort(int A[], int tam){ //recebe dois parâmetros, o vetor e o tamanho do vetor
    int troca = 1; //declara e inicializa nossa variável que atuará como "flag" como 1, ou verdadeira
    while (troca) { //enquanto a "flag" troca for verdadeira (1) (precisa de troca) ele entra no loop while
        troca = 0; //altera o valor da nossa "flag" para 0, ou falsa, dizendo que não precisa de troca, pois se nenhum if for atendido o loop é encerrado
        for (int i = 0; i <= tam - 2; i += 2){ //for para percorrer os índices pares, por isso começa em 0 e pula de 2 em 2 [0, 2, ...]
            if(A[i] > A[i+1]){ //compara os dois elementos. caso queira ordem decrescente, inverter o > para < 
                int aux = A[i]; //utiliza uma variável auxiliar para realizar a troca entre os elementos
                A[i] = A[i+1];
                A[i+1] = aux;
                troca = 1; //altera nosso flag para 1. enquanto ela continuar 1 é porque tem troca (verdadeira)
            }
        }
        for(int j = 1; j <= tam - 2; j += 2){  //for para percorrer os índices ímpares, por isso começa em 1 e pula de 2 em 2 [1, 3, ...]
            if(A[j] > A[j+1]){ //compara os dois elementos. caso queira ordem decrescente, inverter o > para < 
                int aux = A[j]; //utiliza uma variável auxiliar para realizar a troca entre os elementos
                A[j] = A[j+1];
                A[j+1] = aux;
                troca = 1; //altera nosso flag para 1. enquanto ela continuar 1 é porque tem troca (verdadeira)
            }
        }
    }
}