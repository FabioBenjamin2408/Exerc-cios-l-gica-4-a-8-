#include <stdio.h>

int main() {
    int A[20], B[30], C[50];
    int num;

    // Leitura dos elementos do vetor A
    printf("Digite 5 elementos do Vetor A:\n");
    for (num = 0; num < 20; num++) {
        printf("Elemento A: ", num);
        scanf("%d", &A[num]);
    }

    // Leitura dos elementos do vetor B
    printf("\nDigite 5 elementos do Vetor B:\n");
    for (num = 0; num < 30; num++) {
        printf("Elemento B: ", num);
        scanf("%d", &B[num]);
    }

    // Cálculo do vetor C (junção dos elementos de A e B)
    for (num = 0; num < 20; num++) {
        C[num] = A[num];
    }
    for (num = 0; num < 30; num++) {
        C[num + 5] = B[num];
    }

    // Exibição do vetor C
    printf("\n A junção dos elementos dos Vetores A e B no vetor C são:\n");
    for (num = 0; num < 50; num++) {
        printf("C[%d] = %d\n", num, C[num]);
    }

    return 0;
}