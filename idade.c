
#include <stdio.h>

int main() {
    int idade[15];
    int maiores = 0, menores = 0;
    float soma = 0, media;

    printf("=== Pesquisa de Idades ===\n");

    for(int i = 0; i < 15; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);

        soma += idade[i];

        if(idade[i] >= 18)
            maiores++;
        else
            menores++;
    }

    media = soma / 15;

    printf("\nMedia de idade: %.1f\n", media);
    printf("Maiores de idade: %d\n", maiores);
    printf("Menores de idade: %d\n", menores);

    return 0;
}
