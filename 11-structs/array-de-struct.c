#include <stdio.h>
#include <string.h>

// Array de structs
struct Aluno {
    int matricula;
    char nome[100];
    float media;
};

int main() {
    struct Aluno alunos[3];
    
    // Preenchendo o array
    struct Aluno alunos_iniciais[3] = {
        {2024001, "João Silva", 8.5f},
        {2024002, "Maria Santos", 9.0f},
        {2024003, "Pedro Costa", 7.5f}
    };
    
    for (int i = 0; i < 3; i++) {
        alunos[i] = alunos_iniciais[i];
    }
    
    printf("=== Lista de Alunos ===\n");
    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("  Matrícula: %d\n", alunos[i].matricula);
        printf("  Nome: %s\n", alunos[i].nome);
        printf("  Média: %.2f\n", alunos[i].media);
    }
    
    return 0;
}
