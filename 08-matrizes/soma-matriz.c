#include <stdio.h>

// Soma de duas matrizes
int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int soma[2][2];
    
    printf("Matriz 1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz 2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    printf("\nSoma das matrizes:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
