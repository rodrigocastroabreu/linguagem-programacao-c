#include <stdio.h>

// Ponteiros com inteiros
int main() {
    int numero = 42;
    int *ponteiro = &numero;
    
    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", (void*)&numero);
    printf("Valor do ponteiro: %p\n", (void*)ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);
    
    // Modificando o valor através do ponteiro
    *ponteiro = 100;
    printf("\nApós modificação via ponteiro:\n");
    printf("Valor de numero: %d\n", numero);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);
    
    return 0;
}
