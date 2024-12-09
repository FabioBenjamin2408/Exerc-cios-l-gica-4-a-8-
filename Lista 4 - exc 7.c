#include <stdio.h>

int main() {
    int A[10], B[10]; 
    int num;

// Leitura dos elementos do vetor A
    printf("Digite 10 elementos do Vetor A:\n");
    for (num = 0; num < 10; num++) {
        printf("Elemento %d: ", num);
        scanf("%d", &A[num]);
    }

// Formação do vetor B 
    for (num = 0; num < 10; num++) {
        B[num] = A[9 - num]; 
    }

// Exibição dos elementos do vetor B
    printf("\n Os elementos do Vetor B  são:\n");
    for (num = 0; num < 10; num++) {
        printf("B[%d] = %d\n", num, B[num]);
    }

    return 0;
}