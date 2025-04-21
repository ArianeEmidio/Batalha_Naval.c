#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio horizontal na linha 3, colunas C, D, E (índices 2, 3, 4)
    tabuleiro[3][2] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[3][4] = 3;

    // Navio vertical na coluna H (índice 7), linhas 5, 6, 7
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    // Exibir nome do jogo
    printf("\n-- TABULEIRO BATALHA NAVAL --\n\n");

    // Exibe o cabeçalho das colunas (letras)
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
