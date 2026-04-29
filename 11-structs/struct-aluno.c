#include <stdio.h>
#include <string.h>

// Struct para representar um aluno
struct Aluno {
    int matricula;
    char nome[100];
    float media;
};

int main() {
    struct Aluno aluno1;
    
    aluno1.matricula = 2024001;
    strcpy(aluno1.nome, "João Silva");
    aluno1.media = 8.5f;
    
    printf("=== Dados do Aluno ===\n");
    printf("Matrícula: %d\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Média: %.2f\n", aluno1.media);
    
    return 0;
}
