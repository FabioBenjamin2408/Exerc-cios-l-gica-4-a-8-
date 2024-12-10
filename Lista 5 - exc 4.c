#include <stdio.h>

// Função para ordenar o vetor em ordem crescente
void ordem(int B[], int tamanho) {
    int num, F, As;
    for (num = 0; num < tamanho - 1; num++) {
        for (F = num + 1; F < tamanho; F++) {
            if (B[num] > B[F]) {
                As = B[num];
                B[num] = B[F];
                B[F] = As;
            }
        }
    }
}

int main(){
    int A[12], B[12], C[12];

// Leitura dos elementos da matriz A
    printf("Digite 12 elementos inteiros para a matriz A:\n");
    for (int i = 0; i < 12; i++) {
        printf("Elemento A %d: ", i);
        scanf("%d", &A[i]);
    }

// Ordenação da matriz A
    ordenar(A, 12);

// Leitura dos elementos da matriz B
    printf("\n Digite 12 números inteiros para a matriz B:\n");
    for (int i = 0; i < 12; i++) {
        printf("Elemento B %d: ", i);
        scanf("%d", &B[i]);
    }

// Ordenação da matriz B
    ordenar(B, 12);

// Criação da matriz C com a soma dos elementos correspondentes de A e B
    for (int i = 0; i < 12; i++) {
        C[i] = A[i] + B[i];
    }

// Ordenação da matriz C
    ordenar(C, 12);

// Exibição dos elementos da matriz C
    printf("\n Os elementos da matriz C em ordem crescente são:\n");
    for (int i = 0; i < 12; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}