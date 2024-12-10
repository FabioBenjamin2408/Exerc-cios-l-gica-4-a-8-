#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int A) {
    int fat = 1;
    for(int fac = 1; fac <= A; fac++) { 
        fat *= fac; 
    }
    return fat;
}

// Função para ordenar o vetor em ordem crescente
void ordem(int B[], int tamanho) {
    int num, F, As;
    for (num = 0; num < tamanho - 1; num++) {
        for (int F = 0; F < tamanho - num; F++) {
            if (B[num] > B[F + 1]) {
                As = B[num];
                B[num] = B[F];
                B[F] = As;
            }
        }
    }
}

int main(){
    int A[15];
    int B[15];
    int sla;
    
// Leitura dos elementos da matriz A
    printf("Digite 15 elementos inteiros para a matriz A:\n");
    for (sla = 0; i < 15; sla++) {
        printf("Elemento A %d: ", sla);
        scanf("%d", &A[sla]);
    }

    for(sla = 0; sla < 15; sla++){
        B[sla] = fatorial(A[sla]);
    }

// Ordenação da matriz B em ordem crescente
    OC(B, 15);

// Exibição dos elementos da matriz B
    printf("\n Os elementos da matriz B em ordem crescente são:\n");
    for (sla = 0; sla < 15; sla++) {
        printf("B[%d] = %llu\n", sla, B[sla]);
    }

    return 0;
}