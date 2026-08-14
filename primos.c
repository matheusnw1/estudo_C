
#include <stdio.h>

int main() {

    int inicio, fim;
    int primo;
    int divisores;

    int quantidade = 0;
    int soma = 0;
    int maior = 0;
    int menor = 0;

    printf("Digite o inicio: ");
    scanf("%d", &inicio);

    printf("Digite o fim: ");
    scanf("%d", &fim);

    printf("\nNumeros primos:\n");

    for(int numero = inicio; numero <= fim; numero++) {

        if(numero < 2)
            continue;

        primo = 1;

        for(int divisor = 2; divisor < numero; divisor++) {

            if(numero % divisor == 0) {
                primo = 0;
                break;
            }
        }

        if(primo) {

            printf("%d ", numero);

            quantidade++;
            soma += numero;

            if(quantidade == 1) {
                menor = numero;
                maior = numero;
            }
            else {
                if(numero < menor)
                    menor = numero;

                if(numero > maior)
                    maior = numero;
            }
        }
    }

    if(quantidade == 0) {
        printf("\n\nNenhum numero primo encontrado.\n");
    }
    else {
        printf("\n\nQuantidade: %d\n", quantidade);
        printf("Menor primo: %d\n", menor);
        printf("Maior primo: %d\n", maior);
        printf("Soma dos primos: %d\n", soma);
    }

    return 0;
}
