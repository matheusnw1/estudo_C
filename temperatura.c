
#include <stdio.h>

int main() {
    float temp, total = 0, maior, menor, media;
    int baixa = 0, ideal = 0, atencao = 0, risco = 0, acima25 = 0;

    printf("=== Monitoramento de Temperatura ===\n\n");

    for (int i = 1; i <= 12; i++) {
        printf("Temperatura da hora %2d: ", i);
        scanf("%f", &temp);

        total += temp;

        if (i == 1) {
            maior = temp;
            menor = temp;
        } else {
            if (temp > maior) maior = temp;
            if (temp < menor) menor = temp;
        }

        if (temp > 25) acima25++;

        if (temp < 18) {
            baixa++;
            printf("Situacao: Temperatura baixa\n\n");
        } else if (temp <= 25) {
            ideal++;
            printf("Situacao: Temperatura ideal\n\n");
        } else if (temp <= 30) {
            atencao++;
            printf("Situacao: Atencao\n\n");
        } else {
            risco++;
            printf("Situacao: Risco de superaquecimento\n\n");
        }
    }

    media = total / 12;

    printf("=== Relatorio Final ===\n");
    printf("Temperatura baixa (<18C):     %d hora(s)\n", baixa);
    printf("Temperatura ideal (18-25C):   %d hora(s)\n", ideal);
    printf("Atencao (25.1-30C):           %d hora(s)\n", atencao);
    printf("Risco de superaquecimento:    %d hora(s)\n", risco);
    printf("Temperatura media: %.2f C\n", media);
    printf("Maior temperatura: %.2f C\n", maior);
    printf("Menor temperatura: %.2f C\n", menor);
    printf("Horas acima de 25C: %d\n", acima25);

    if (risco > 0)
        printf("\nAmbiente critico!\n");
    else if (atencao > 0)
        printf("\nAmbiente requer atencao.\n");
    else
        printf("\nAmbiente estavel.\n");

    return 0;
}
