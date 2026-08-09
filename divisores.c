
#include <stdio.h>

int main() {

    int numero;
    int soma;
    int divisor;

    printf("===== ANALISADOR DE NUMEROS =====\n");

    do {

        printf("\nDigite um numero (0 para sair): ");
        scanf("%d", &numero);

        if(numero == 0)
            break;

        if(numero < 0) {
            printf("Digite apenas numeros positivos!\n");
            continue;
        }

        soma = 0;

        printf("Divisores: ");

        for(divisor = 1; divisor <= numero / 2; divisor++) {

            if(numero % divisor == 0) {

                printf("%d ", divisor);

                soma += divisor;
            }
        }

        printf("\nSoma dos divisores: %d\n", soma);

        if(soma == numero) {

            printf("Classificacao: NUMERO PERFEITO\n");

        }
        else if(soma > numero) {

            printf("Classificacao: NUMERO ABUNDANTE\n");

        }
        else {

            printf("Classificacao: NUMERO DEFICIENTE\n");
        }

    } while(numero != 0);

    printf("\nPrograma encerrado.\n");

    return 0;
}
