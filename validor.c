
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char senha[100];

    int maiuscula = 0;
    int minuscula = 0;
    int numero = 0;
    int especial = 0;

    printf("===== VALIDADOR DE SENHA =====\n\n");

    printf("Digite uma senha: ");
    scanf("%99s", senha);

    int tamanho = strlen(senha);

    for (int i = 0; i < tamanho; i++) {

        if (isupper(senha[i]))
            maiuscula = 1;

        else if (islower(senha[i]))
            minuscula = 1;

        else if (isdigit(senha[i]))
            numero = 1;

        else
            especial = 1;
    }

    printf("\n===== RESULTADO =====\n");

    if (tamanho < 8)
        printf("Falta: pelo menos 8 caracteres\n");

    if (!maiuscula)
        printf("Falta: uma letra maiuscula\n");

    if (!minuscula)
        printf("Falta: uma letra minuscula\n");

    if (!numero)
        printf("Falta: um numero\n");

    if (!especial)
        printf("Falta: um caractere especial\n");

    if (tamanho >= 8 && maiuscula && minuscula && numero && especial)
        printf("Senha valida!\n");
    else
        printf("Senha invalida!\n");

    return 0;
}
