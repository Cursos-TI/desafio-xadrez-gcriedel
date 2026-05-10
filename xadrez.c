// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Desafio Xadrez em C
// Objetivo: Xadrez - Tema 1 - Desafio Nivel Novato - Modulo 4

#include <stdio.h>
int main() {

    // =====================================================
    // TORRE
    // a torre se move em linha reta
    // aqui vou fazer ela andar 5 casas para a direita
    // usando a estrutura FOR
    // =====================================================

    int casasTorre = 5;

    printf("=== MOVIMENTO DA TORRE ===\n");

    // o for vai repetir 5 vezes
    // cada repetição representa uma casa percorrida

    for (int i = 1; i <= casasTorre; i++) {

        printf("Direita\n");
    }

    // pulando linha para organizar melhor a saída

    printf("\n");

    // =====================================================
    // BISPO
    // o bispo se move na diagonal
    // aqui ele vai andar 5 casas para cima e direita
    // usando a estrutura WHILE
    // =====================================================

    int casasBispo = 5;

    // variável de controle do while

    int contadorBispo = 1;

    printf("=== MOVIMENTO DO BISPO ===\n");

    // enquanto o contador for menor ou igual a 5
    // o movimento continuará acontecendo

    while (contadorBispo <= casasBispo) {

        printf("Cima, Direita\n");

        // incremento do contador
        // sem isso o while ficaria infinito

        contadorBispo++;
    }

    printf("\n");

    // =====================================================
    // RAINHA
    // a rainha pode andar em todas as direções
    // aqui ela vai andar 8 casas para a esquerda
    // usando a estrutura DO-WHILE
    // =====================================================

    int casasRainha = 8;

    // variável de controle

    int contadorRainha = 1;

    printf("=== MOVIMENTO DA RAINHA ===\n");

    // o do-while executa pelo menos uma vez
    // depois verifica a condição

    do {

        printf("Esquerda\n");

        contadorRainha++;

    } while (contadorRainha <= casasRainha);

    // =====================================================
    // FINAL DO PROGRAMA
    // =====================================================

    return 0;
}