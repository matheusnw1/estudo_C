
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int jogador;
    int computador;

    srand(time(NULL));

    computador = rand() % 3 + 1;

    printf("===== PEDRA, PAPEL E TESOURA =====\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");

    printf("Escolha: ");
    scanf("%d", &jogador);

    printf("\n");

    if(computador == 1)
        printf("Computador: Pedra\n");
    else if(computador == 2)
        printf("Computador: Papel\n");
    else
        printf("Computador: Tesoura\n");

    if(jogador == computador){
        printf("Empate!\n");
    }
    else if((jogador == 1 && computador == 3) ||
            (jogador == 2 && computador == 1) ||
            (jogador == 3 && computador == 2)){
        printf("Voce venceu!\n");
    }
    else{
        printf("Computador venceu!\n");
    }

    return 0;
}
