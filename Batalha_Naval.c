#include <stdio.h>

#define TAMANHO_TABULEIRO   10
#define TAMANHO_NAVIO        3
#define AGUA                 0
#define NAVIO                3
#define HABILIDADE           5

// Função para aplicar uma matriz de habilidade ao tabuleiro
void aplicarHabilidade(int tabuleiro[][TAMANHO_TABULEIRO], int habilidade[5][5], int origemLinha, int origemColuna) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidade[i][j] == 1) {
                int linhaTabuleiro = origemLinha - 2 + i;
                int colunaTabuleiro = origemColuna - 2 + j;
                if (linhaTabuleiro >= 0 && linhaTabuleiro < TAMANHO_TABULEIRO &&
                    colunaTabuleiro >= 0 && colunaTabuleiro < TAMANHO_TABULEIRO &&
                    tabuleiro[linhaTabuleiro][colunaTabuleiro] == AGUA) {
                    tabuleiro[linhaTabuleiro][colunaTabuleiro] = HABILIDADE;
                }
            }
        }
    }
}

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com água
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Posicionar navios:
    tabuleiro[3][1] = NAVIO;
    tabuleiro[3][2] = NAVIO;
    tabuleiro[3][3] = NAVIO;

    tabuleiro[5][9] = NAVIO;
    tabuleiro[6][9] = NAVIO;
    tabuleiro[7][9] = NAVIO;

    tabuleiro[0][4] = NAVIO;
    tabuleiro[1][5] = NAVIO;
    tabuleiro[2][6] = NAVIO;

    tabuleiro[7][7] = NAVIO;
    tabuleiro[8][6] = NAVIO;
    tabuleiro[9][5] = NAVIO;

    // MATRIZ: Habilidade Cone
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // MATRIZ: Habilidade Cruz
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    // MATRIZ: Habilidade Octaedro (losango)
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Aplicar as habilidades ao tabuleiro:
    aplicarHabilidade(tabuleiro, cone, 2, 2);        // Cone no canto superior esquerdo
    aplicarHabilidade(tabuleiro, cruz, 3, 7);        // Cruz no canto superior direito
    aplicarHabilidade(tabuleiro, octaedro, 7, 2);    // Octaedro no canto inferior esquerdo

    // Exibir nome do jogo
    printf("\n-- TABULEIRO BATALHA NAVAL --\n\n");

    // Exibe o cabeçalho das colunas
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%c ", colunas[j]);
    }
    printf("\n");

    // Exibe o tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
