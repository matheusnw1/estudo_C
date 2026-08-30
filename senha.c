
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int senha;
    int tentativa;
    int tentativas = 5;
    int acertou = 0;

    srand(time(NULL));

    senha = rand() % 9000 + 1000;

    printf("===== JOGO DA SENHA =====\n");
    printf("Descubra a senha de 4 digitos!\n");

    while(tentativas > 0) {

        printf("\nTentativas restantes: %d\n", tentativas);
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if(tentativa < 1000 || tentativa > 9999) {
            printf("Digite uma senha com exatamente 4 digitos!\n");
            continue;
        }

        if(tentativa == senha) {

            printf("\nSenha descoberta!\n");
            printf("Voce acertou!\n");

            acertou = 1;
            break;
        }

        if(tentativa < senha)
            printf("A senha correta e MAIOR.\n");
        else
            printf("A senha correta e MENOR.\n");

        tentativas--;
    }

    if(!acertou) {
        printf("\nVoce perdeu!\n");
        printf("A senha era: %d\n", senha);
    }

    return 0;
}
