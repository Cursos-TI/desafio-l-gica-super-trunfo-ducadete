#include <stdio.h>
#include <string.h>

// --- Criação da struct ---
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    
    // --- Declaração das variáveis ---
    struct Territorio tabuleiro[5]; 
    int i;                        

    printf("--- CADASTRO DE TERRITORIOS DO JOGO WAR ---\n\n");

    // --- Cadastro dos territórios ---
    for (i = 0; i < 5; i++) {
        printf("--- Cadastrando o Territorio %d ---\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf(" %[^\n]s", tabuleiro[i].nome);

        printf("Digite a cor do exercito: ");
        scanf(" %s", tabuleiro[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &tabuleiro[i].tropas);
        printf("\n"); 
    }

    system("cls || clear");

    // --- Exibição dos dados ---
    printf("--- DADOS DOS TERRITORIOS CADASTRADOS ---\n\n");

    for (i = 0; i < 5; i++) {
        printf("------------------------------------\n");
        printf("Territorio: %s\n", tabuleiro[i].nome);
        printf("Cor do Exercito: %s\n", tabuleiro[i].cor);
        printf("Quantidade de Tropas: %d\n", tabuleiro[i].tropas);
        printf("------------------------------------\n\n");
    }

    return 0;
}