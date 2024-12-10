#include <stdio.h>

int main() {
    int A[12];
    int num, A, temp;

// Leitura dos elementos do vetor A
    printf("Digite 12 elementos do Vetor A:\n");
    for (num = 0; num < 12; num++) {
        printf("Elemento A %d: ", num);
        scanf("%d", &A[num]);
    }

// Ordenação dos elementos de A em ordem decrescente 
    for (num = 0; num < 12 - 1; num++) {
        for (A = num + 1; A < 12; A++) {
            if (A[num] < A[A]) { 
// Troca o elemento atual se menor que o próximo
                temp = A[num];
                A[num] = A[A];
                A[A] = temp;
            }
        }
    }

// Exibição dos elementos ordenados
    printf("\n Os elementos do Vetor A em ordem decrescente são:\n");
    for (num = 0; num < 12; num++) {
        printf("A[%d] = %d\n", num, A[num]);
    }

    return 0;
}
