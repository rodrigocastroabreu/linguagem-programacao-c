#include <stdio.h>

// Exercícios de laços
int main() {
    int n;
    
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &n);
    
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    
    printf("Fatorial de %d = %d\n", n, fatorial);
    
    printf("\nSoma de números de 1 a 100:\n");
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("Soma: %d\n", soma);
    
    return 0;
}
