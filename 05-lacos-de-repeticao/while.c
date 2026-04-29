#include <stdio.h>

// Laço while
int main() {
    int contador = 1;
    
    printf("Números de 1 a 10 (usando while):\n");
    
    while (contador <= 10) {
        printf("%d ", contador);
        contador++;
    }
    printf("\n");
    
    return 0;
}
