
#include <stdio.h>

int main() {

    int compra, pagamento, troco;

    printf("===== MAQUINA DE TROCO =====\n\n");

    printf("Valor da compra (em centavos): ");
    scanf("%d", &compra);

    printf("Valor pago (em centavos): ");
    scanf("%d", &pagamento);

    if (compra <= 0 || pagamento <= 0) {
        printf("Valores invalidos!\n");
        return 0;
    }

    if (pagamento < compra) {

        printf("\nPagamento insuficiente!\n");
        printf("Faltam: R$ %.2f\n", (compra - pagamento) / 100.0);

        return 0;
    }

    troco = pagamento - compra;

    printf("\nTroco: R$ %.2f\n\n", troco / 100.0);

    int quantidade;

    quantidade = troco / 100;
    troco %= 100;
    printf("Notas de R$100: %d\n", quantidade);

    quantidade = troco / 50;
    troco %= 50;
    printf("Notas de R$50:  %d\n", quantidade);

    quantidade = troco / 20;
    troco %= 20;
    printf("Notas de R$20:  %d\n", quantidade);

    quantidade = troco / 10;
    troco %= 10;
    printf("Notas de R$10:  %d\n", quantidade);

    quantidade = troco / 5;
    troco %= 5;
    printf("Notas de R$5:   %d\n", quantidade);

    quantidade = troco / 2;
    troco %= 2;
    printf("Notas de R$2:   %d\n", quantidade);

    quantidade = troco / 1;
    troco %= 1;
    printf("Moedas de R$1:  %d\n", quantidade);

    return 0;
}
