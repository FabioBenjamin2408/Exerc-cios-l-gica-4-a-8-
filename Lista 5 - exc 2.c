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

// Função para pesquisar um elemento no vetor
int Pesquisa(int B[], int tamanho, int elemento) {
    for (int num = 0; num < tamanho; num++) {
        if (B[num] == elemento) {
            return num; // Retorna o índice onde o elemento foi encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int A[8], B[8]; 
    int num, elemento, pos;

// Leitura dos elementos do vetor A
    printf("Digite 8 elementos do Vetor A:\n");
    for (num = 0; num < 8; num++) {
        printf("Elemento A %d: ", num);
        scanf("%d", &A[num]);
    }

// Formação do vetor B )
    for (num = 0; num < 8; num++) {
        B[num] = A[num] * 5;
    }

// Ordenação do vetor B em ordem crescente
    ordem(B, 8);

// Exibição dos elementos do vetor B
    printf("\n Os elementos do Vetor B em ordem crescente são:\n");
    for (num = 0; num < 8; num++) {
        printf("B[%d] = %d\n", num, B[num]);
    }

// Pesquisa de um elemento no vetor B
    printf("\n Digite o elemento que gostaria de pesquisar B: ");
    scanf("%d", &elemento);

    pos = Pesquisa(B, 8, elemento);
    if (pos != -1) {
        printf("Elemento %d encontrado na posição B[%d].\n", elemento, pos);
    } else {
        printf("Elemento %d não encontrado no vetor B.\n", elemento);
    }

    return 0;
}
