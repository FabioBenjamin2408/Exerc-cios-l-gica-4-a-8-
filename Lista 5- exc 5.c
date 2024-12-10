#include <stdio.h>

int main() {
    int A[20], B[30], C[50];
    int num, i, j, temp;

// Leitura dos elementos do vetor A
    printf("Digite 20 elementos do Vetor A:\n");
    for (num = 0; num < 20; num++) {
        printf("Elemento A %d: ", num);
        scanf("%d", &A[num]);
    }

// Ordenação do vetor A em ordem decrescente
    for (i = 0; i < 20 - 1; i++) {
        for (j = i + 1; j < 20; j++) {
            if (A[i] < A[j]) { 
// Troca o elemento atual se for menor que o próximo
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Leitura dos elementos do vetor B
    printf("\nDigite 30 elementos do Vetor B:\n");
    for (num = 0; num < 30; num++) {
        printf("Elemento B %d: ", num);
        scanf("%d", &B[num]);
    }

    // Cálculo do vetor C (junção dos elementos de A e B)
    for (num = 0; num < 20; num++) {
        C[num] = A[num]; 
    }
    for (num = 0; num < 30; num++) {
        C[num + 20] = B[num]; 
    }

    // Exibição do vetor C
    printf("\nA junção dos elementos dos Vetores A e B no vetor C é:\n");
    for (num = 0; num < 50; num++) {
        printf("C[%d] = %d\n", num, C[num]);
    }

    return 0;
}
