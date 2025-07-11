#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

    i = 1;
    while(i <= bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Implementação de Movimentação da Torre
    printf("\n");
    printf("### Quantas casas a torre deve andar para a direita?\n");
    scanf("%d", &torre);
    printf("\n");

    i = 1;
    do {
        printf("Direita\n");
        i++;
    } while (i <= torre);

    // Implementação de Movimentação da Rainha
    printf("\n");
    printf("### Quantas casas a rainha deve andar para a esquerda?\n");
    scanf("%d", &rainha);
    printf("\n");

    for(i = 1; i <= rainha; i++) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\n");
    printf("### Selecione se o cavalo deve ir para a esquerda ou direita:\n");
    printf("1. Esquerda\n");
    printf("2. Direita\n");
    scanf("%d", &opcao);
    printf("\n");

    for(int j = 1; j <= cavaloHorizontal; j++) {
        int k = 1;

        while(k <= cavaloVertical) {
            printf("Baixo\n");
            k++;
        }
        
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

    printf("\n\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
