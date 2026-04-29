#include <stdio.h>

// Operadores aritméticos
int main() {
    int a = 10;
    int b = 3;
    
    printf("a = %d, b = %d\n", a, b);
    printf("Adição: %d + %d = %d\n", a, b, a + b);
    printf("Subtração: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicação: %d * %d = %d\n", a, b, a * b);
    printf("Divisão: %d / %d = %d\n", a, b, a / b);
    printf("Módulo (resto): %d %% %d = %d\n", a, b, a % b);
    
    return 0;
}
