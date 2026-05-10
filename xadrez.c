// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Desafio Xadrez em C
// Objetivo: Xadrez - Tema 2 - Desafio Nivel Aventureiro - Modulo 4

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

    // linha em branco para organizar a saída

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

    // enquanto o contador for menor ou igual ao número de casas
    // o movimento continua acontecendo

    while (contadorBispo <= casasBispo) {

        printf("Cima, Direita\n");

        // incremento do contador
        // evita loop infinito

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

    // o do-while executa primeiro
    // depois verifica a condição

    do {

        printf("Esquerda\n");

        contadorRainha++;

    } while (contadorRainha <= casasRainha);

    // linha em branco para separar os movimentos

    printf("\n");

    // =====================================================
    // CAVALO
    // o cavalo se move em formato de "L"
    // neste desafio ele fará:
    // 2 casas para baixo
    // 1 casa para a esquerda
    //
    // aqui serão usados loops aninhados
    // um FOR e um WHILE
    // =====================================================

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("=== MOVIMENTO DO CAVALO ===\n");

    // =====================================================
    // PRIMEIRA PARTE DO MOVIMENTO
    // usando FOR para mover duas casas para baixo
    // =====================================================

    for (int i = 1; i <= movimentosBaixo; i++) {

        printf("Baixo\n");
    }

    // =====================================================
    // SEGUNDA PARTE DO MOVIMENTO
    // usando WHILE para mover uma casa para esquerda
    // =====================================================

    int contadorEsquerda = 1;

    while (contadorEsquerda <= movimentosEsquerda) {

        printf("Esquerda\n");

        contadorEsquerda++;
    }

    // =====================================================
    // EXEMPLO DE LOOP ANINHADO
    // aqui estou utilizando um loop dentro do outro
    // apenas para demonstrar o conceito solicitado
    // =====================================================

    printf("\n=== LOOP ANINHADO DO CAVALO ===\n");

    // loop externo com FOR

    for (int i = 1; i <= 1; i++) {

        int contadorInterno = 1;

        // loop interno com WHILE

        while (contadorInterno <= 2) {

            printf("Baixo\n");

            contadorInterno++;
        }

        printf("Esquerda\n");
    }

    // =====================================================
    // FINAL DO PROGRAMA
    // =====================================================

    return 0;
}