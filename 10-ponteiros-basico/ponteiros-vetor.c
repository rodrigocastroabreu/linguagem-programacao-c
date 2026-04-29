#include <stdio.h>

// Ponteiros com vetores
int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int *ponteiro = vetor;
    
    printf("Elementos do vetor usando índice:\n");
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    printf("\nElementos do vetor usando ponteiro:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ponteiro + %d) = %d\n", i, *(ponteiro + i));
    }
    
    printf("\nPercorrendo com incremento de ponteiro:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ponteiro);
        ponteiro++;
    }
    printf("\n");
    
    return 0;
}
