#include <stdio.h>

// Função que não retorna valor
void saudacao() {
    printf("Olá! Bem-vindo ao programa de funções.\n");
}

// Função que retorna um valor
int quadrado(int x) {
    return x * x;
}

int main() {
    saudacao();
    
    int numero = 5;
    int resultado = quadrado(numero);
    
    printf("O quadrado de %d é %d\n", numero, resultado);
    
    return 0;
}
