#include <stdio.h>

// Passagem por valor
void modificarPorValor(int x) {
    x = 100;
    printf("Dentro da função (por valor): x = %d\n", x);
}

// Passagem por referência
void modificarPorReferencia(int *x) {
    *x = 100;
    printf("Dentro da função (por referência): x = %d\n", *x);
}

int main() {
    int numero = 10;
    
    printf("Valor inicial: %d\n\n", numero);
    
    printf("=== Passagem por Valor ===\n");
    modificarPorValor(numero);
    printf("Após a função: %d\n\n", numero);
    
    printf("=== Passagem por Referência ===\n");
    numero = 10;
    modificarPorReferencia(&numero);
    printf("Após a função: %d\n", numero);
    
    return 0;
}
