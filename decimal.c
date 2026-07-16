
#include <stdio.h>

int main() {

    int numero;
    int binario[32];
    int i = 0;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("Binario: 0");
        return 0;
    }

    while(numero > 0){

        binario[i] = numero % 2;
        numero = numero / 2;
        i++;

    }

    printf("\nBinario: ");

    for(int j = i - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }

    return 0;
}
