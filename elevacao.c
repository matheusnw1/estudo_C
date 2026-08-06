
#include <stdio.h>

int main() {

    float temperatura;
    float soma = 0;
    float maior, menor, media;

    int quantidade = 0;
    int acima80 = 0;
    int abaixo30 = 0;

    printf("===== CONTROLE DE TEMPERATURA =====\n");

    while(1){

        printf("Temperatura (-999 para finalizar): ");
        scanf("%f", &temperatura);

        if(temperatura == -999)
            break;

        if(quantidade == 0){
            maior = temperatura;
            menor = temperatura;
        }

        if(temperatura > maior)
            maior = temperatura;

        if(temperatura < menor)
            menor = temperatura;

        if(temperatura > 80)
            acima80++;

        if(temperatura < 30)
            abaixo30++;

        soma += temperatura;
        quantidade++;
    }

    if(quantidade == 0){
        printf("\nNenhuma temperatura registrada.\n");
        return 0;
    }

    media = soma / quantidade;

    printf("\n========== RELATORIO ==========\n");
    printf("Maior temperatura: %.1f°C\n", maior);
    printf("Menor temperatura: %.1f°C\n", menor);
    printf("Media: %.2f°C\n", media);
    printf("Acima de 80°C: %d\n", acima80);
    printf("Abaixo de 30°C: %d\n", abaixo30);

    if(media < 60)
        printf("Situacao: NORMAL\n");
    else if(media <= 80)
        printf("Situacao: ATENCAO\n");
    else
        printf("Situacao: CRITICA\n");

    return 0;
}
