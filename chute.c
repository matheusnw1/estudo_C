
#include <stdio.h>

int main() {

    int segredo = 4321;
    int chute;
    int tentativas = 0;

    printf("===== CAIXA FORTE =====\n");

    do{

        printf("Digite seu palpite: ");
        scanf("%d", &chute);

        tentativas++;

        if(chute > segredo){
            printf("O numero secreto e MENOR!\n\n");
        }
        else if(chute < segredo){
            printf("O numero secreto e MAIOR!\n\n");
        }

    }while(chute != segredo);

    printf("\nParabens! Voce acertou!\n");
    printf("Tentativas: %d\n", tentativas);

    return 0;
}
