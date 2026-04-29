#include <stdio.h>
#include <string.h>

// Funções de string: strlen e strcpy
int main() {
    char original[] = "Hello, World!";
    char copia[50];
    
    // strcpy copia uma string para outra
    strcpy(copia, original);
    
    printf("String original: %s\n", original);
    printf("String copiada: %s\n", copia);
    printf("Comprimento da string original: %lu\n", strlen(original));
    printf("Comprimento da string copiada: %lu\n", strlen(copia));
    
    return 0;
}
