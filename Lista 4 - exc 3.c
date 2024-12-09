#include <stdio.h>

int main() {
    int A[5], B[5], C[5];
    int num;

    // Leitura dos elementos do vetor A
    printf("Digite 5 elementos do Vetor A:\n");
    for (num = 0; num < 5; num++) {
        printf("Elemento A: ", num);
        scanf("%d", &A[num]);
    }

    // Leitura dos elementos do vetor B
    printf("\nDigite 5 elementos do Vetor B:\n");
    for (num = 0; num < 5; num++) {
        printf("Elemento B: ", num);
        scanf("%d", &B[num]);
    }

    // Cálculo do vetor C (subtração dos elementos de A e B)
    for (num = 0; num < 5; num++) {
        C[num] = A[num] - B[num];
    }

    // Exibição do vetor C
    printf("\n Os elementos do Vetor C são:\n");
    for (num = 0; num < 5; num++) {
        printf("C[%d] = %d\n", num, C[num]);
    }

    return 0;
}