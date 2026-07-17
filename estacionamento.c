
#include <stdio.h>

int main() {

    int hEntrada, mEntrada;
    int hSaida, mSaida;
    int minutosEntrada, minutosSaida;
    int tempoTotal;
    int horas, minutos;
    float valor;

    printf("Hora de entrada: ");
    scanf("%d", &hEntrada);

    printf("Minuto de entrada: ");
    scanf("%d", &mEntrada);

    printf("Hora de saida: ");
    scanf("%d", &hSaida);

    printf("Minuto de saida: ");
    scanf("%d", &mSaida);

    minutosEntrada = hEntrada * 60 + mEntrada;
    minutosSaida = hSaida * 60 + mSaida;

    if(minutosSaida < minutosEntrada)
        minutosSaida += 24 * 60;

    tempoTotal = minutosSaida - minutosEntrada;

    horas = tempoTotal / 60;
    minutos = tempoTotal % 60;

    if(horas >= 24){
        valor = ((horas / 24) + (horas % 24 != 0)) * 50;
    }
    else if(horas <= 2){
        valor = 8;
    }
    else if(horas <= 5){
        valor = 8 + (horas - 2) * 3;
    }
    else{
        valor = 17 + (horas - 5) * 5;
    }

    printf("\nTempo estacionado: %d hora(s) e %d minuto(s)\n", horas, minutos);
    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}
