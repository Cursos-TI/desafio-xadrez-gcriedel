// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Desafio Xadrez em C
// Objetivo: Xadrez - Tema 3 - Desafio Nivel Mestre - Modulo 4

#include <stdio.h>

// =====================================================
// FUNÇÃO DA TORRE
// aqui estou usando recursividade no lugar do for
// a função vai chamar ela mesma até acabar as casas
// =====================================================

void moverTorre(int casas) {

    // condição de parada
    // quando chegar em 0 a função encerra

    if (casas == 0) {

        return;
    }

    // mostrando a direção do movimento

    printf("Direita\n");

    // chamada recursiva
    // vai diminuindo uma casa por vez

    moverTorre(casas - 1);
}

// =====================================================
// FUNÇÃO DA RAINHA
// aqui também usei recursividade
// a rainha vai andar para esquerda
// =====================================================

void moverRainha(int casas) {

    // condição de parada da recursão

    if (casas == 0) {

        return;
    }

    // imprime a direção

    printf("Esquerda\n");

    // chama a função novamente
    // diminuindo uma casa

    moverRainha(casas - 1);
}

// =====================================================
// FUNÇÃO DO BISPO
// o bispo anda na diagonal
// então será mostrado:
// cima + direita
//
// aqui estou misturando:
// recursividade + loops aninhados
// =====================================================

void moverBispo(int casas) {

    // condição de parada

    if (casas == 0) {

        return;
    }

    // =====================================================
    // LOOP EXTERNO
    // representa o movimento vertical
    // =====================================================

    for (int vertical = 1; vertical <= 1; vertical++) {

        // =====================================================
        // LOOP INTERNO
        // representa o movimento horizontal
        // =====================================================

        for (int horizontal = 1; horizontal <= 1; horizontal++) {

            printf("Cima, Direita\n");
        }
    }

    // chamada recursiva
    // repete o movimento até acabar as casas

    moverBispo(casas - 1);
}

int main() {

    // =====================================================
    // VARIÁVEIS DAS PEÇAS
    // aqui estou definindo quantas casas
    // cada peça vai se mover
    // =====================================================

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // =====================================================
    // MOVIMENTO DA TORRE
    // =====================================================

    printf("=== MOVIMENTO DA TORRE ===\n");

    moverTorre(casasTorre);

    // linha em branco para separar os movimentos

    printf("\n");

    // =====================================================
    // MOVIMENTO DO BISPO
    // =====================================================

    printf("=== MOVIMENTO DO BISPO ===\n");

    moverBispo(casasBispo);

    printf("\n");

    // =====================================================
    // MOVIMENTO DA RAINHA
    // =====================================================

    printf("=== MOVIMENTO DA RAINHA ===\n");

    moverRainha(casasRainha);

    printf("\n");

    // =====================================================
    // MOVIMENTO DO CAVALO
    //
    // o cavalo vai fazer um movimento em "L"
    //
    // neste exemplo:
    // 2 casas para cima
    // 1 casa para direita
    //
    // aqui estou usando:
    // FOR + WHILE
    // continue
    // break
    //
    // OBS:
    // antes eu tinha colocado um exemplo extra
    // de loop aninhado imprimindo mais movimentos
    //
    // mas percebi que isso fazia o cavalo
    // se mover mais vezes do que o desafio pediu
    //
    // então removi aquela parte para deixar
    // o movimento exatamente igual ao solicitado
    // =====================================================

    printf("=== MOVIMENTO DO CAVALO ===\n");

    // =====================================================
    // PRIMEIRA PARTE
    // duas casas para cima usando FOR
    // =====================================================

    for (int i = 1; i <= 2; i++) {

        // exemplo simples usando continue
        // aqui ele não altera o resultado
        // mas mostra o uso da instrução

        if (i == 0) {

            continue;
        }

        printf("Cima\n");
    }

    // =====================================================
    // SEGUNDA PARTE
    // uma casa para direita usando WHILE
    // =====================================================

    int direita = 1;

    while (direita <= 1) {

        printf("Direita\n");

        // break encerrando o loop
        // depois que o movimento acontecer

        break;
    }

    // =====================================================
    // FINAL DO PROGRAMA
    // =====================================================

    return 0;
}