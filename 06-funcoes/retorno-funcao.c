#include <stdio.h>

// Função que realiza operações e retorna resultado
int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    return 0;
}

int main() {
    int x = 20;
    int y = 5;
    
    printf("x = %d, y = %d\n\n", x, y);
    printf("Soma: %d\n", somar(x, y));
    printf("Subtração: %d\n", subtrair(x, y));
    printf("Divisão: %.2f\n", dividir((float)x, (float)y));
    
    return 0;
}
