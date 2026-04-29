#include <stdio.h>

#define PI 3.14159
#define VELOCIDADE_LUZ 299792458

// Programa que utiliza constantes
int main() {
    const int idade = 25;
    const float altura = 1.75f;
    
    printf("Idade (constante): %d\n", idade);
    printf("Altura (constante): %.2f\n", altura);
    printf("Pi (macro): %.5f\n", PI);
    printf("Velocidade da luz: %d m/s\n", VELOCIDADE_LUZ);
    
    return 0;
}
