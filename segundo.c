
#include <stdio.h>

int main() {

    int numero;
    int maior, segundoMaior, menor;
    int soma = 0;
    int acimaMedia = 0;

    for (int i = 1; i <= 10; i++) {

        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma += numero;

        if (i == 1) {
            maior = numero;
            segundoMaior = numero;
            menor = numero;
        }
        else {

            if (numero > maior) {
                segundoMaior = maior;
                maior = numero;
            }
            else if (numero > segundoMaior && numero != maior) {
                segundoMaior = numero;
            }

            if (numero < menor)
                menor = numero;
        }
    }

    float media = soma / 10.0;

    printf("\n===== RESULTADO =====\n");

    printf("Maior numero: %d\n", maior);
    printf("Segundo maior: %d\n", segundoMaior);
    printf("Menor numero: %d\n", menor);
    printf("Media: %.2f\n", media);

    printf("\nDigite novamente os 10 numeros:\n");

    for (int i = 1; i <= 10; i++) {

        printf("%d numero: ", i);
        scanf("%d", &numero);

        if (numero > media)
            acimaMedia++;
    }

    printf("\nNumeros acima da media: %d\n", acimaMedia);

    return 0;
}
