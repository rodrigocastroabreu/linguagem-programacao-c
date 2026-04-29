#include <stdio.h>

// Exercício: Calcular média de 3 notas
int main() {
    float nota1, nota2, nota3;
    float media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("Média: %.2f\n", media);
    
    if (media >= 7.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    
    return 0;
}
