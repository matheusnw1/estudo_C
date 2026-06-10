
#include <stdio.h>

int main() {
    float vendas[12], total = 0, maior;
    int melhorMes = 0;

    printf("=== Sistema de Vendas ===\n");

    for(int i = 0; i < 12; i++) {
        printf("Venda do mes %d: ", i + 1);
        scanf("%f", &vendas[i]);

        total += vendas[i];
    }

    maior = vendas[0];

    for(int i = 1; i < 12; i++) {
        if(vendas[i] > maior) {
            maior = vendas[i];
            melhorMes = i;
        }
    }

    printf("\nTotal vendido: R$ %.2f\n", total);
    printf("Media mensal: R$ %.2f\n", total / 12);
    printf("Melhor mes: %d\n", melhorMes + 1);
    printf("Maior venda: R$ %.2f\n", maior);

    return 0;
}
