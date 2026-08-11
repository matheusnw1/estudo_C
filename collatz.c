
#include <stdio.h>

int main() {

    long long numero;
    long long maior;
    int passos = 0;

    do {
        printf("Digite um numero positivo: ");
        scanf("%lld", &numero);

        if (numero <= 0)
            printf("Numero invalido!\n");

    } while (numero <= 0);

    maior = numero;

    printf("\nSequencia:\n");
    printf("%lld", numero);

    while (numero != 1) {

        if (numero % 2 == 0) {
            numero = numero / 2;
        }
        else {
            numero = numero * 3 + 1;
        }

        if (numero > maior)
            maior = numero;

        printf(" -> %lld", numero);

        passos++;
    }

    printf("\n\nQuantidade de passos: %d\n", passos);
    printf("Maior valor atingido: %lld\n", maior);

    return 0;
}
