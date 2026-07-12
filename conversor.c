
#include <stdio.h>

int main() {

    int segundos;
    int horas, minutos, resto;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;

    minutos = resto / 60;
    resto = resto % 60;

    printf("\n%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", resto);

    return 0;
}
