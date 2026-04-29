#include <stdio.h>

// Leitura de vetor
int main() {
    int vetor[5];
    
    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nVetores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    return 0;
}
