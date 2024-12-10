#include <stdio.h>

int main(){
    int A[30], B[30];
    int num, valor, encontrado = 0;
    
// Leitura dos elementos da vetor A
    printf("Digite 30 elementos do Vetor A:\n");
    for (num = 0; num < 30; num++) {
        printf("Elemento %d: ", num);
        scanf("%d", &A[num]);
        
// Calculo do quadrado
    B[num] = A[num] * A[num] * A[num];
    
// Exibição dos elementos do vetor B
    printf("\n Os elementos do Vetor A ao cubo são:\n");
    for (num = 0; num < 30; num++) {
        printf("B[%d] = %d\n", num, B[num]);
    }
// Rotina de pesquisa no vetor B
    printf("\n Digite o valor que deseja pesquisar no vetor B: ");
    scanf("%d", &valor);

    // Percorre o vetor B procurando pelo valor
    for (num = 0; num < 30; num++) {
        if (B[num] == valor) {
            printf("Valor %d encontrado na posição B %d.\n", valor, num);
// Marca que o valor foi encontrado
            encontrado = 1;
// Interrompe a pesquisa após encontrar a primeira ocorrência
            break; 
        }
    }

    if (!encontrado) {
        printf("Valor %d não foi encontrado no vetor B.\n", valor);
    }

    return 0;
}
}
