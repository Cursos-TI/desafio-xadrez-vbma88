#include <stdio.h>

int main() {
    int i, j; // Variáveis loop

    // ..............................
    // Definir variável passos 
    // ..............................
    int bispo_passos = 5;   // Movimentação 
    int torre_passos = 5;   // Movimentação
    int rainha_passos = 8;  // Movimentação
    int cavalo_horizontal = 2; // Movimentação (horizontal)
    int cavalo_vertical = 1;   // Movimentação (vertical)

    // ..............................
    // Movimentação do Bispo
    // ..............................
    printf("- Movimento do Bispo: -\n");
    for (i = 0; i < bispo_passos; i++) {
        printf(".........\n");
        printf("Cima\n");
        printf(".........\n");
        printf("Direita\n");
    }

    printf("\n");

    // ..............................
    // Movimentação da Torre
    // ..............................
    printf("- Movimento da Torre: -\n");
    i = 0;
    while (i < torre_passos) {
        printf(".........\n");
        printf("Direita\n");
        i++;
    }

    printf("\n");

    // ..............................
    // Movimentação da Rainha
    // ..............................
    printf("- Movimento da Rainha: -\n");
    i = 0;
    do {
        printf(".........\n");
        printf("Esquerda\n");
        i++;
    } while (i < rainha_passos);

    printf("\n");

    // ..............................
    // Movimentação do Cavalo
    // ..............................
    // O Cavalo se move em L:
    // 2 casas em uma direção (horizontal) + 1 em outra (vertical).
    printf("- Movimento do Cavalo: -\n");

    for (i = 0; i < cavalo_horizontal; i++) {
        printf(".........\n");
        printf("Direita\n"); // 2 passos para direita
    }

    for (j = 0; j < cavalo_vertical; j++) {
        printf(".........\n");
        printf("Cima\n"); // 1 passo para cima
    }

    printf("\n");

    // ..............................
    // Fim do programa
    // ..............................
    printf("...............................\n");
    printf("- Fim da execução dos movimentos. -\n");
    printf("...............................\n");

    return 0; // Fim do programa
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.