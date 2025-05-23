#include <stdio.h>

// Número de casas para movimentos recursivos
const int casasTorre = 3;
const int casasBispo = 3;
const int casasRainha = 2;

// Função recursiva para movimentar a Torre (vertical e horizontal)
void moverTorreVertical(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreVertical(casas - 1);
}

void moverTorreHorizontal(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreHorizontal(casas - 1);
}

// Função recursiva para movimentar a Rainha (combina Torre e Bispo)
void moverRainhaDiagonal(int casas) {
    if (casas == 0) return;
    printf("Cima e Direita\n");
    moverRainhaDiagonal(casas - 1);
}

// Função recursiva para o Bispo (movimento diagonal) + loops aninhados
void moverBispo(int casas) {
    // Loop aninhado para demonstrar o uso (não necessário para a recursão em si)
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            if (i == j) {
                printf("Diagonal (Cima e Direita) [%d, %d]\n", i + 1, j + 1);
            }
        }
    }

    // Recursão para mostrar movimento
    if (casas == 0) return;
    printf("Cima e Direita\n");
    moverBispo(casas - 1);
}

// Função para o movimento do Cavalo (duas casas para cima e uma para direita)
void moverCavalo() {
    const int maxLinhas = 8;
    const int maxColunas = 8;
    int inicioLinha = 4;
    int inicioColuna = 4;

    // Simula os possíveis movimentos do cavalo usando loops aninhados
    for (int i = -2; i <= -1; i++) {  // movimento para cima (-2)
        for (int j = 1; j <= 1; j++) { // movimento para direita (+1)
            int novaLinha = inicioLinha + i;
            int novaColuna = inicioColuna + j;
            if (novaLinha >= 0 && novaLinha < maxLinhas &&
                novaColuna >= 0 && novaColuna < maxColunas) {
                printf("Cavalo se move: 2 para cima, 1 para direita => [%d, %d]\n", novaLinha, novaColuna);
                continue;
            }
            break;
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorreVertical(casasTorre);
    moverTorreHorizontal(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverTorreVertical(casasRainha);
    moverTorreHorizontal(casasRainha);
    moverRainhaDiagonal(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
