#include <stdio.h>

// Laço for
int main() {
    printf("Números de 1 a 10:\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    printf("\nTabuada do 5:\n");
    for (int i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }
    
    return 0;
}
