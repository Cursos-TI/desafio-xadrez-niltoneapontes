#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas) {
    if(casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if(casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if(casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo(int horizontal, int vertical, int opcao) {
        for(int j = 1, k = 1; j <= horizontal || k <= vertical; j++, k++) {
        printf("Cima\n");
        
        if(k == vertical) {
            switch(opcao) {
                case 1:
                    printf("Esquerda\n");
                    break;
                case 2:
                    printf("Direita\n");
                    break;
                default:
                    printf("Opcao invalida\n");
                    break;
            } 
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    int i, bispo = 5, torre = 5, rainha = 8;
    int cavaloHorizontal = 1, cavaloVertical = 2, opcao;
    printf("### Bem vindo(a) ao jogo de Xadrez! ###\n");

    // Implementação de Movimentação do Bispo
    printf("\n");
    printf("### Quantas casas o bispo deve andar na diagonal superior direita?\n");
    scanf("%d", &bispo);
    printf("\n");

    moverBispo(bispo); // Recursividade do Bispo

    // Implementação de Movimentação da Torre
    printf("\n");
    printf("### Quantas casas a torre deve andar para a direita?\n");
    scanf("%d", &torre);
    printf("\n");

    moverTorre(torre); // Recursividade da Torre

    // Implementação de Movimentação da Rainha
    printf("\n");
    printf("### Quantas casas a rainha deve andar para a esquerda?\n");
    scanf("%d", &rainha);
    printf("\n");

    moverRainha(rainha);  // Recursividade da Rainha

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\n");
    printf("### Selecione se o cavalo deve ir para a esquerda ou direita:\n");
    printf("1. Esquerda\n");
    printf("2. Direita\n");
    scanf("%d", &opcao);
    printf("\n");

    moverCavalo(cavaloHorizontal, cavaloVertical, opcao); // Loops complexos para o Cavalo

    printf("\n\n");

    return 0;
}
