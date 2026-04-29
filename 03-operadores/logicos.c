#include <stdio.h>

// Operadores lógicos
int main() {
    int a = 1;
    int b = 0;
    
    printf("a = %d, b = %d\n\n", a, b);
    printf("a AND b (a && b): %d\n", a && b);
    printf("a OR b (a || b): %d\n", a || b);
    printf("NOT a (!a): %d\n", !a);
    printf("NOT b (!b): %d\n", !b);
    
    return 0;
}
