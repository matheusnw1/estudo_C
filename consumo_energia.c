
#include <stdio.h>

int main() {
    float consumo, total = 0, maior, menor, media;
    int baixo = 0, moderado = 0, alto = 0, muitoAlto = 0;

    printf("=== Controle de Consumo de Energia ===\n\n");

    for (int i = 1; i <= 10; i++) {
        printf("Digite o consumo da residencia %d (kWh): ", i);
        scanf("%f", &consumo);

        total += consumo;

        if (i == 1) {
            maior = consumo;
            menor = consumo;
        } else {
            if (consumo > maior) maior = consumo;
            if (consumo < menor) menor = consumo;
        }

        if (consumo <= 100) {
            baixo++;
            printf("Classificacao: Baixo consumo\n\n");
        } else if (consumo <= 250) {
            moderado++;
            printf("Classificacao: Consumo moderado\n\n");
        } else if (consumo <= 500) {
            alto++;
            printf("Classificacao: Consumo alto\n\n");
        } else {
            muitoAlto++;
            printf("Classificacao: Consumo muito alto\n\n");
        }
    }

    media = total / 10;

    printf("=== Relatorio Final ===\n");
    printf("Baixo consumo (ate 100 kWh):    %d residencia(s)\n", baixo);
    printf("Consumo moderado (101-250 kWh): %d residencia(s)\n", moderado);
    printf("Consumo alto (251-500 kWh):     %d residencia(s)\n", alto);
    printf("Consumo muito alto (>500 kWh):  %d residencia(s)\n", muitoAlto);
    printf("Consumo total:   %.2f kWh\n", total);
    printf("Media de consumo: %.2f kWh\n", media);
    printf("Maior consumo:   %.2f kWh\n", maior);
    printf("Menor consumo:   %.2f kWh\n", menor);

    return 0;
}
