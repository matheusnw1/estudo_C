
#include <stdio.h>

int main() {
    float altura[10], soma = 0, media, maior, menor;
    int acimaMedia = 0;

    printf("=== Cadastro de Alturas ===\n");

    for(int i = 0; i < 10; i++) {
        do {
            printf("Digite a altura da pessoa %d: ", i + 1);
            scanf("%f", &altura[i]);

            if(altura[i] <= 0)
                printf("Valor invalido!\n");

        } while(altura[i] <= 0);

        soma += altura[i];
    }

    media = soma / 10;
    maior = menor = altura[0];

    for(int i = 0; i < 10; i++) {
        if(altura[i] > maior) maior = altura[i];
        if(altura[i] < menor) menor = altura[i];
        if(altura[i] > media) acimaMedia++;
    }

    printf("\nMedia: %.2f m\n", media);
    printf("Maior altura: %.2f m\n", maior);
    printf("Menor altura: %.2f m\n", menor);
    printf("Pessoas acima da media: %d\n", acimaMedia);

    return 0;
}
