#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

#define MAX 100

// CORES
#define RESET   "\x1b[0m"
#define VERDE   "\x1b[32m"
#define AZUL    "\x1b[34m"
#define AMARELO "\x1b[33m"
#define VERMELHO "\x1b[31m"
#define CIANO   "\x1b[36m"

// ---------- ESTRUTURA ----------
typedef struct {
    int id;
    char nome[50];
    float salario;
} Funcionario;

Funcionario lista[MAX];
int total = 0;

// ---------- VISUAL ----------
void limpar() { system("cls"); }

void pausar() {
    printf(AMARELO "\nPressione ENTER..." RESET);
    getchar();
}

void linha() {
    printf(CIANO "========================================\n" RESET);
}

// ---------- SYSTEM COM MATRIZ ----------
void desenharSYSTEM(const char* cor) {

    int S[5][5] = {
        {1,1,1,1,1},
        {1,0,0,0,0},
        {1,1,1,1,1},
        {0,0,0,0,1},
        {1,1,1,1,1}
    };

    int Y[5][5] = {
        {1,0,0,0,1},
        {0,1,0,1,0},
        {0,0,1,0,0},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    int T[5][5] = {
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    int E[5][5] = {
        {1,1,1,1,1},
        {1,0,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,1,1,1,1}
    };

    int M[5][5] = {
        {1,0,0,0,1},
        {1,1,0,1,1},
        {1,0,1,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1}
    };

    printf("%s\n", cor);

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 5; j++)
            printf(S[i][j] ? "\xDB" : " ");
        printf("  ");

        for(int j = 0; j < 5; j++)
            printf(Y[i][j] ? "\xDB" : " ");
        printf("  ");

        for(int j = 0; j < 5; j++)
            printf(S[i][j] ? "\xDB" : " ");
        printf("  ");

        for(int j = 0; j < 5; j++)
            printf(T[i][j] ? "\xDB" : " ");
        printf("  ");

        for(int j = 0; j < 5; j++)
            printf(E[i][j] ? "\xDB" : " ");
        printf("  ");

        for(int j = 0; j < 5; j++)
            printf(M[i][j] ? "\xDB" : " ");

        printf("\n");
    }

    printf(RESET);
}

// ---------- MENU ----------
void menu() {

    for(int i = 0; i < 2; i++) {
        limpar();
        desenharSYSTEM(AZUL);
        Sleep(150);

        limpar();
        desenharSYSTEM("\x1b[92m");
        Sleep(150);
    }

    limpar();
    desenharSYSTEM(AZUL);

    linha();
    printf(VERDE " [1] " RESET "Cadastrar funcionario\n");
    printf(VERDE " [2] " RESET "Listar funcionarios\n");
    printf(VERDE " [3] " RESET "Buscar por ID\n");
    printf(VERDE " [4] " RESET "Deletar funcionario\n");
    printf(VERMELHO " [0] " RESET "Sair\n");
    linha();
    printf("Escolha: ");
}

// ---------- VALIDAÇÃO ----------
int soNumero(char *str) {
    for (int i = 0; str[i]; i++)
        if (!isdigit(str[i])) return 0;
    return 1;
}

int soLetra(char *str) {
    for (int i = 0; str[i]; i++)
        if (!isalpha(str[i]) && str[i] != ' ') return 0;
    return 1;
}

int soFloat(char *str) {
    int ponto = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '.') ponto++;
        else if (!isdigit(str[i])) return 0;
    }
    return ponto <= 1;
}

int lerInt() {
    char entrada[50];
    while (1) {
        fgets(entrada, 50, stdin);
        entrada[strcspn(entrada, "\n")] = 0;

        if (soNumero(entrada)) return atoi(entrada);
        printf(VERMELHO "Digite apenas numeros: " RESET);
    }
}

float lerFloat() {
    char entrada[50];
    while (1) {
        fgets(entrada, 50, stdin);
        entrada[strcspn(entrada, "\n")] = 0;

        if (soFloat(entrada)) return atof(entrada);
        printf(VERMELHO "Digite numero valido: " RESET);
    }
}

void lerNome(char *nome) {
    while (1) {
        fgets(nome, 50, stdin);
        nome[strcspn(nome, "\n")] = 0;

        if (soLetra(nome) && strlen(nome) > 0) break;
        printf(VERMELHO "Digite apenas letras: " RESET);
    }
}

// ---------- REGRAS ----------
int idExiste(int id) {
    for (int i = 0; i < total; i++)
        if (lista[i].id == id)
            return 1;
    return 0;
}

int nomeExiste(char *nome) {
    for (int i = 0; i < total; i++)
        if (strcmp(lista[i].nome, nome) == 0)
            return 1;
    return 0;
}

// ---------- FUNÇÕES ----------
void cadastrar() {

    printf(CIANO "\n--- Cadastro ---\n" RESET);

    while (1) {
        printf("ID: ");
        int id = lerInt();

        if (idExiste(id))
            printf(VERMELHO "ID ja existe!\n" RESET);
        else {
            lista[total].id = id;
            break;
        }
    }

    while (1) {
        printf("Nome: ");
        lerNome(lista[total].nome);

        if (nomeExiste(lista[total].nome))
            printf(VERMELHO "Nome ja existe!\n" RESET);
        else break;
    }

    printf("Salario: ");
    lista[total].salario = lerFloat();

    total++;
    printf(VERDE "\nCadastrado com sucesso!\n" RESET);
}

void listar() {

    printf(CIANO "\n--- Funcionarios ---\n" RESET);

    if (total == 0) {
        printf(VERMELHO "Nenhum cadastrado.\n" RESET);
        return;
    }

    for (int i = 0; i < total; i++) {
        linha();
        printf("ID: %d\n", lista[i].id);
        printf("Nome: %s\n", lista[i].nome);
        printf("Salario: R$ %.2f\n", lista[i].salario);
    }
}

void buscar() {

    printf("Digite o ID: ");
    int id = lerInt();
    int achou = 0;

    for (int i = 0; i < total; i++) {
        if (lista[i].id == id) {
            linha();
            printf("Nome: %s\n", lista[i].nome);
            printf("Salario: %.2f\n", lista[i].salario);
            achou = 1;
        }
    }

    if (!achou)
        printf(VERMELHO "Nao encontrado\n" RESET);
}

void deletar() {

    printf("Digite o ID para deletar: ");
    int id = lerInt();
    int pos = -1;

    for (int i = 0; i < total; i++) {
        if (lista[i].id == id) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf(VERMELHO "ID nao encontrado!\n" RESET);
        return;
    }

    char op;
    printf(AMARELO "Tem certeza? (s/n): " RESET);
    scanf(" %c", &op);
    getchar();

    if (op != 's' && op != 'S') {
        printf("Cancelado.\n");
        return;
    }

    for (int i = pos; i < total - 1; i++) {
        lista[i] = lista[i + 1];
    }

    total--;
    printf(VERDE "Removido com sucesso!\n" RESET);
}

// ---------- MAIN ----------
int main() {
    int op;

    do {
        menu();
        op = lerInt();

        limpar();

        switch (op) {
            case 1: cadastrar(); break;
            case 2: listar(); break;
            case 3: buscar(); break;
            case 4: deletar(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf(VERMELHO "Opcao invalida!\n" RESET);
        }

        pausar();

    } while (op != 0);

    return 0;
}