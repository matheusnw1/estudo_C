
#include <stdio.h>

int main() {

    int senha = 1234;
    int tentativa;
    int tentativas = 3;

    while (tentativas > 0) {

        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            printf("\nAcesso permitido!\n");
            return 0;
        }

        tentativas--;

        if (tentativas > 0)
            printf("Senha incorreta! Restam %d tentativa(s).\n\n", tentativas);
    }

    printf("\nConta bloqueada!\n");

    return 0;
}
