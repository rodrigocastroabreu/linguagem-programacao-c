#include <stdio.h>
#include <string.h>

// Leitura de strings
int main() {
    char nome[50];
    char frase[100];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);
    
    printf("\nNome: %s\n", nome);
    printf("Frase: %s\n", frase);
    printf("Comprimento do nome: %lu\n", strlen(nome));
    printf("Comprimento da frase: %lu\n", strlen(frase));
    
    return 0;
}
