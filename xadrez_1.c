#include <stdio.h>

int main() {
    // quantidade de casas que cada um vai se mover
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    
    printf("--- XADREZ - Analise Sistemas S1 Desafio 3 ---\n");
    printf("Movimentos da TORRE: 5 casas para a direita\n");
    for (int i = 0; i < torre; i++) { //imprime linhas Direita enquanto i não chegar a 'torre'
        printf("Direita\n");
    }

    printf("\nMovimentos do BISPO: 5 casas na diagonal\n");
    int j = 0;
    while (j < bispo) { //enquanto j não chegar a 'bispo' imprime linhas Cima Direita
        printf("Cima Direita\n");
        j++;
    }

    printf("\nMovimentos da RAINHA: 8 casas para a esquerda\n");
    int k = 0;
    do {
        printf("Esquerda\n"); //primeiro imprime Esquerda, depois incrementa e repete até k='rainha'
        k++;
    } while (k < rainha);

    printf("\nPS: Alguem junta a Rainha que caiu pela borda do tabuleiro no ultimo movimento..\n");
    printf("\nTABULEIRO DE XADREZ SOH TEM 8 X 8 CASAS\n");
    printf("\n*** Clique ENTER para encerrar***\n");
    fflush(stdin);
    getchar();
    getchar();

    return 0;
}