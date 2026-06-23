
#include <stdio.h>

int main() {
    float notas[5], maior, menor, soma = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    maior = menor = notas[0];
    for (i = 1; i < 5; i++) {
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }

    for (i = 0; i < 5; i++)
        soma += notas[i];

    float media = (soma - maior - menor) / 3.0;
    printf("Media final: %.2f\n", media);
    return 0;
}
