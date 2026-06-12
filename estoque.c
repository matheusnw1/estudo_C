
#include <stdio.h>

int main() {
    int estoque[10];
    int total = 0, maior, menor;

    printf("=== Controle de Estoque ===\n");

    for(int i = 0; i < 10; i++) {
        printf("Quantidade do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
        total += estoque[i];
    }

    maior = menor = estoque[0];

    for(int i = 0; i < 10; i++) {
        if(estoque[i] > maior) maior = estoque[i];
        if(estoque[i] < menor) menor = estoque[i];
    }

    printf("\nTotal de itens: %d\n", total);
    printf("Maior estoque: %d\n", maior);
    printf("Menor estoque: %d\n", menor);

    return 0;
}
