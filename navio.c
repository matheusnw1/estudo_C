
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int linhaNavio, colunaNavio;
    int linha, coluna;
    int tentativas = 10;

    srand(time(NULL));

    linhaNavio = rand() % 5 + 1;
    colunaNavio = rand() % 5 + 1;

    printf("======= BATALHA NAVAL =======\n");
    printf("O navio esta escondido em uma grade 5x5.\n");

    while(tentativas > 0){

        printf("\nTentativas restantes: %d\n", tentativas);

        printf("Linha (1-5): ");
        scanf("%d",&linha);

        printf("Coluna (1-5): ");
        scanf("%d",&coluna);

        if(linha == linhaNavio && coluna == colunaNavio){
            printf("\n💥 NAVIO DESTRUIDO!\n");
            printf("Voce venceu!\n");
            return 0;
        }

        if(linha < linhaNavio)
            printf("O navio esta MAIS ABAIXO.\n");

        if(linha > linhaNavio)
            printf("O navio esta MAIS ACIMA.\n");

        if(coluna < colunaNavio)
            printf("O navio esta MAIS A DIREITA.\n");

        if(coluna > colunaNavio)
            printf("O navio esta MAIS A ESQUERDA.\n");

        tentativas--;
    }

    printf("\nSuas tentativas acabaram!\n");
    printf("O navio estava na linha %d coluna %d.\n",
            linhaNavio,colunaNavio);

    return 0;
}
