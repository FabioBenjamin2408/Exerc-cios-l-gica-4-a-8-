#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int A) {
    int fat = 1;
    for(int fac = 1; fac <= A; fac++) { 
        fat *= fac; 
    }
    return fat;
}

int main() {
    int A[6], B[6];
    int fac;

    // Entrada dos elementos do vetor A
    printf("Digite 6 elementos do Vetor A:\n");
    for (fac = 0; fac < 6; fac++) {
        printf("Elemento %d: ", fac + 1);
        scanf("%d", &A[fac]);
    }

    // Cálculo do vetor B (fatorial de cada elemento de A)
    for (fac = 0; fac < 6; fac++) {
        if (A[fac] >= 0) { 
            B[fac] = fatorial(A[fac]); 
        } else {
            printf("\nErro: O elemento A[%d] = %d é negativo. O fatorial não está definido.\n", fac, A[fac]);
            B[fac] = -1; 
        }
    }

    // Exibição do vetor B
    printf("\nOs elementos do Vetor B são:\n");
    for (fac = 0; fac < 6; fac++) {
        if (B[fac] != -1) {
            printf("B[%d] = %d\n", fac, B[fac]); 
        } else { 
            printf("B[%d] é indefinido (A[%d] = %d é negativo)\n", fac, fac, A[fac]);
        }
    }

    return 0;
}
