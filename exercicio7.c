#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {5, 7, 8, 6},   // Jogador 1
        {4, 6, 5, 7},   // Jogador 2
        {3, 9, 6, 8},   // Jogador 3
        {2, 4, 7, 5}    // Jogador 4
    };

    int i, j;
    int pares = 0, impares = 0;
    int somaJogador[4] = {0}, somaSet[4] = {0};
    int maiorPontuacao = -1, jogadorMaior = -1;
    int maiorSet = -1, setMaior = -1;
    float media[4];
    int maisRegular = -1, menorDiferenca = 9999;

    // ===== Mostrar valores e contar pares/ímpares =====
    printf("Matriz de pontos (Jogadores x Sets):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d ", matriz[i][j]);
            if (matriz[i][j] % 2 == 0)
                pares++;
            else
                impares++;
            somaJogador[i] += matriz[i][j];
            somaSet[j] += matriz[i][j];
        }
        printf("\n");
    }

    printf("\nTotal de pares: %d\n", pares);
    printf("Total de impares: %d\n\n", impares);

    // ===== Pontuação total de cada jogador =====
    for (i = 0; i < 4; i++) {
        printf("Jogador %d: %d pontos\n", i+1, somaJogador[i]);
        if (somaJogador[i] > maiorPontuacao) {
            maiorPontuacao = somaJogador[i];
            jogadorMaior = i+1;
        }
    }
    printf("Jogador com maior pontuacao: Jogador %d (%d pontos)\n\n", jogadorMaior, maiorPontuacao);

    // ===== Pontuação total de cada set =====
    for (j = 0; j < 4; j++) {
        printf("Set %d: %d pontos\n", j+1, somaSet[j]);
        if (somaSet[j] > maiorSet) {
            maiorSet = somaSet[j];
            setMaior = j+1;
        }
    }
    printf("Set mais disputado: Set %d (%d pontos)\n\n", setMaior, maiorSet);

    // ===== Média por jogador =====
    for (i = 0; i < 4; i++) {
        media[i] = somaJogador[i] / 4.0;
        printf("Media Jogador %d: %.2f\n", i+1, media[i]);
    }
    printf("\n");

    // ===== Jogador mais regular =====
    for (i = 0; i < 4; i++) {
        int maior = matriz[i][0];
        int menor = matriz[i][0];
        for (j = 1; j < 4; j++) {
            if (matriz[i][j] > maior) maior = matriz[i][j];
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }
        int diferenca = maior - menor;
        if (diferenca < menorDiferenca) {
            menorDiferenca = diferenca;
            maisRegular = i+1;
        }
    }
    printf("Jogador mais regular: Jogador %d (diferença %d)\n", maisRegular, menorDiferenca);

    return 0;
}
