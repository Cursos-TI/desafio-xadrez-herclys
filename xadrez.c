#include <stdio.h>

// Definição das constantes para os movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // Movimento do Bispo (5 casas na diagonal superior direita - combinação de cima e direita)
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    int i = 0;
    while (i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOV_RAINHA);

    return 0;
}
