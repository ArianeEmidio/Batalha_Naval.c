#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO      3
#define AGUA               0
#define NAVIO              3

int main() {
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // 1) Inicializa o tabuleiro com água
    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
            tabuleiro[i][j] = AGUA;

    // 2) Posiciona navio horizontal em C–E na linha 3
    int linha = 3, coluna = 2;
    if (coluna + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++)
            tabuleiro[linha][coluna + i] = NAVIO;
    }

    // 3) Posiciona navio vertical em H nas linhas 5–7
    linha = 5; coluna = 7;
    if (linha + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++)
            tabuleiro[linha + i][coluna] = NAVIO;
    }

    // 4) Posiciona navio diagonal principal (descendo para a direita) F0, G1, H2
    linha = 0; coluna = 5;
    if (linha + TAMANHO_NAVIO <= TAMANHO_TABULEIRO && coluna + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++)
            tabuleiro[linha + i][coluna + i] = NAVIO;
    }

    // 5) Posiciona navio diagonal secundária (descendo para a esquerda) F7, E8, D9
    linha = 7; coluna = 5;
    if (linha + TAMANHO_NAVIO <= TAMANHO_TABULEIRO && coluna - (TAMANHO_NAVIO - 1) >= 0) {
        for (int i = 0; i < TAMANHO_NAVIO; i++)
            tabuleiro[linha + i][coluna - i] = NAVIO;
    }

    // 6) Imprime o título
    printf("\n-- TABULEIRO BATALHA NAVAL --\n\n");

    // 7) Cabeçalho de colunas
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++)
        printf("%c ", colunas[j]);
    printf("\n");

    // 8) Exibe cada linha do tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}
