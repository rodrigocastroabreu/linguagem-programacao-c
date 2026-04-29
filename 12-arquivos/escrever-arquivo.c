#include <stdio.h>

// Escrever em um arquivo
int main() {
    FILE *arquivo = fopen("dados.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    fprintf(arquivo, "Linha 1: Primeiro texto no arquivo\n");
    fprintf(arquivo, "Linha 2: Segundo texto no arquivo\n");
    fprintf(arquivo, "Linha 3: Terceiro texto no arquivo\n");
    
    printf("Dados escritos no arquivo com sucesso!\n");
    
    fclose(arquivo);
    
    return 0;
}
