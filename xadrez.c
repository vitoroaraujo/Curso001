#include <stdio.h>

void moverTorre(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Cima\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Diagonal (Cima e Esquerda)\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoLoopsAninhados(int casas) {

    for (int i = 0; i < casas; i++) {

        for (int j = 0; j < 1; j++) {
            printf("Diagonal (Cima e Direita)\n");
        }
    }
}

void moverCavalo(int movimentosL) {

    for (int i = 0; i < movimentosL; i++) {

        if (i == 2) {
            printf("Fim dos movimentos do Cavalo.\n");
            break;
        }
        
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        
        printf("Direita\n");
    }
}

int main() {
    int numMovimentos = 5;

    printf("--- Movimento da Torre (Recursividade) ---\n");
    moverTorre(numMovimentos);
    printf("\n"); 

    printf("--- Movimento do Bispo (Recursividade) ---\n");
    moverBispoRecursivo(numMovimentos);
    printf("\n");

    printf("--- Movimento do Bispo (Loops Aninhados) ---\n");
    moverBispoLoopsAninhados(numMovimentos);
    printf("\n");

    printf("--- Movimento da Rainha (Recursividade) ---\n");
    moverRainha(numMovimentos);
    printf("\n");

    printf("--- Movimento do Cavalo (Loops Aninhados) ---\n");
    moverCavalo(numMovimentos);
    printf("\n");

    return 0;
}
