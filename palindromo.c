
#include <stdio.h>

int main() {

    int numero;
    int copia;
    int invertido = 0;
    int resto;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    copia = numero;

    while(copia > 0){

        resto = copia % 10;
        invertido = invertido * 10 + resto;
        copia /= 10;

    }

    if(numero == invertido)
        printf("O numero e um palindromo.");
    else
        printf("O numero nao e um palindromo.");

    return 0;
}
