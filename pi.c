
#include <stdio.h>

int main() {

    long long termos;
    double pi = 0.0;
    double sinal = 1.0;

    printf("===== CALCULO DE PI =====\n");

    printf("Digite a quantidade de termos: ");
    scanf("%lld", &termos);

    if(termos <= 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for(long long i = 0; i < termos; i++) {

        pi += sinal / (2 * i + 1);

        sinal = -sinal;
    }

    pi *= 4;

    printf("\nQuantidade de termos: %lld\n", termos);
    printf("Valor aproximado de PI: %.15f\n", pi);
    printf("Valor real aproximado: 3.141592653589793\n");

    return 0;
}
