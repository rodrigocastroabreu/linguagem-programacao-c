#include <stdio.h>

// Cálculo de média de valores em um vetor
int main() {
    float notas[5];
    float soma = 0;
    
    printf("Digite 5 notas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    float media = soma / 5;
    
    printf("\nMédia das notas: %.2f\n", media);
    
    return 0;
}
