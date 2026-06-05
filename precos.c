
#include <stdio.h>

int main() {
    float preco, total = 0, maisCaroVal = -1, maisBaratoVal = -1;
    int qtd = 0;
    float desconto = 0, valorFinal;

    printf("=== Sistema de Caixa de Mercado ===\n");
    printf("Digite 0 para encerrar.\n\n");

    while (1) {
        printf("Preco do produto: R$ ");
        scanf("%f", &preco);

        if (preco == 0) break;

        if (preco < 0) {
            printf("Preco invalido! Digite um valor positivo.\n");
            continue;
        }

        qtd++;
        total += preco;

        if (maisCaroVal < 0 || preco > maisCaroVal) maisCaroVal = preco;
        if (maisBaratoVal < 0 || preco < maisBaratoVal) maisBaratoVal = preco;
    }

    if (qtd == 0) {
        printf("Nenhum produto registrado.\n");
        return 0;
    }

    float media = total / qtd;

    if (total <= 100.0) {
        desconto = 0;
        printf("\nSem desconto aplicado.\n");
    } else if (total <= 300.0) {
        desconto = total * 0.05;
        printf("\nDesconto de 5%% aplicado.\n");
    } else if (total <= 500.0) {
        desconto = total * 0.10;
        printf("\nDesconto de 10%% aplicado.\n");
    } else {
        desconto = total * 0.15;
        printf("\nDesconto de 15%% aplicado.\n");
    }

    valorFinal = total - desconto;

    printf("\n=== Relatorio da Compra ===\n");
    printf("Quantidade de produtos: %d\n", qtd);
    printf("Valor total:    R$ %.2f\n", total);
    printf("Valor medio:    R$ %.2f\n", media);
    printf("Produto mais caro:    R$ %.2f\n", maisCaroVal);
    printf("Produto mais barato:  R$ %.2f\n", maisBaratoVal);
    printf("Desconto:       R$ %.2f\n", desconto);
    printf("Valor final:    R$ %.2f\n", valorFinal);

    return 0;
}
