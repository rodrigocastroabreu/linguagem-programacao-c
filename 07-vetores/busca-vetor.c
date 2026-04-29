#include <stdio.h>

// Busca em um vetor
int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    int alvo;
    int encontrado = 0;
    int posicao = -1;
    
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
    
    printf("Digite o número que deseja buscar: ");
    scanf("%d", &alvo);
    
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == alvo) {
            encontrado = 1;
            posicao = i;
            break;
        }
    }
    
    if (encontrado) {
        printf("Número %d encontrado na posição %d\n", alvo, posicao);
    } else {
        printf("Número %d não encontrado\n", alvo);
    }
    
    return 0;
}
