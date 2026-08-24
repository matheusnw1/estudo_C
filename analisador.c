
#include <stdio.h>

int main() {

    int numero;
    int original;
    int digito;

    int quantidade = 0;
    int maior = 0;
    int menor = 9;
    int soma = 0;
    int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido!\n");
        return 0;
    }

    original = numero;

    if (numero == 0) {
        quantidade = 1;
        maior = 0;
        menor = 0;
    }

    while (numero > 0) {

        digito = numero % 10;

        soma += digito;
        quantidade++;

        if (digito > maior)
            maior = digito;

        if (digito < menor)
            menor = digito;

        invertido = invertido * 10 + digito;

        numero = numero / 10;
    }

    printf("\n===== RESULTADO =====\n");

    printf("Quantidade de digitos: %d\n", quantidade);
    printf("Maior digito: %d\n", maior);
    printf("Menor digito: %d\n", menor);
    printf("Soma dos digitos: %d\n", soma);

    if (original == invertido)
        printf("Palindromo: SIM\n");
    else
        printf("Palindromo: NAO\n");

    return 0;
}
