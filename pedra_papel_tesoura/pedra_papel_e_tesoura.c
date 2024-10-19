#include <stdio.h>
#include <string.h>

void repetirCodigo(int vezes) {
    for (int repeat = 0; repeat < vezes; repeat++) {
        char player1[255];
        char player2[255];

        printf("O que o jogador 1 vai jogar: ");
        scanf("%s", player1);

        printf("O que o jogador 2 vai jogar: ");
        scanf("%s", player2);

        if (strcmp(player1, "papel") == 0) {
            printf("O primeiro jogador jogou papel");
            
            if (strcmp(player2, "papel") == 0) {
                printf("\nO segundo jogador jogou papel");
                printf("\nDeu empate\n");
                
            } else if (strcmp(player2, "tesoura") == 0) {
                printf("\nO segundo jogador jogou tesoura");
                printf("\nO segundo jogador ganhou\n");
                
            } else if (strcmp(player2, "pedra") == 0) {
                printf("\nO segundo jogador jogou pedra");
                printf("\nO segundo jogador perdeu\n");
            }

        } else if (strcmp(player1, "tesoura") == 0) {
            printf("O primeiro jogador jogou tesoura");
            
            if (strcmp(player2, "papel") == 0) {
                printf("\nO segundo jogador jogou papel");
                printf("\nO segundo jogador perdeu\n");
                
            } else if (strcmp(player2, "tesoura") == 0) {
                printf("\nO segundo jogador jogou tesoura");
                printf("\nDeu empate\n");
                
            } else if (strcmp(player2, "pedra") == 0) {
                printf("\nO segundo jogador jogou pedra");
                printf("\nO segundo jogador ganhou\n");
            }

        } else if (strcmp(player1, "pedra") == 0) {
            printf("O primeiro jogador jogou pedra");
            
            if (strcmp(player2, "papel") == 0) {
                printf("\nO segundo jogador jogou papel");
                printf("\nO primeiro jogador perdeu\n");
                
            } else if (strcmp(player2, "tesoura") == 0) {
                printf("\nO segundo jogador jogou tesoura");
                printf("\nO segundo jogador perdeu\n");
                
            } else if (strcmp(player2, "pedra") == 0) {
                printf("\nO segundo jogador jogou pedra");
                printf("\nDeu empate\n");
            }
        }
        printf("\nEste código está sendo repetido pela %dª vez.\n\n", repeat + 1);
    }
}

int main() {
    repetirCodigo(5);

    return 0;
}
