#include <stdio.h>

// Laço do-while
int main() {
    int numero;
    
    do {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);
        
        if (numero < 1 || numero > 10) {
            printf("Número inválido! Tente novamente.\n");
        }
    } while (numero < 1 || numero > 10);
    
    printf("Você digitou: %d\n", numero);
    
    return 0;
}
