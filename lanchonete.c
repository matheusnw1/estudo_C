
#include <stdio.h>

float calcularPreco(int produto) {
    switch (produto) {
        case 1:
            return 15.00;
        case 2:
            return 25.00;
        case 3:
            return 12.00;
        case 4:
            return 10.00;
        case 5:
            return 7.00;
        default:
            return 0;
    }
}

void mostrarCardapio() {
    printf("\n===== CARDAPIO =====\n");
    printf("1 - Hamburguer       R$ 15.00\n");
    printf("2 - Pizza             R$ 25.00\n");
    printf("3 - Cachorro-quente   R$ 12.00\n");
    printf("4 - Batata frita      R$ 10.00\n");
    printf("5 - Refrigerante      R$ 7.00\n");
    printf("0 - Finalizar pedido\n");
}

int main() {
    int produto, quantidade;
    int totalProdutos = 0;
    int produtoMaisCaro = 0;
    float total = 0;
    float maiorPreco = 0;

    do {
        mostrarCardapio();

        printf("Escolha um produto: ");
        scanf("%d", &produto);

        if (produto == 0)
            break;

        if (produto < 1 || produto > 5) {
            printf("Produto invalido!\n");
            continue;
        }

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        if (quantidade <= 0) {
            printf("Quantidade invalida!\n");
            continue;
        }

        float preco = calcularPreco(produto);
        float subtotal = preco * quantidade;

        total += subtotal;
        totalProdutos += quantidade;

        if (preco > maiorPreco) {
            maiorPreco = preco;
            produtoMaisCaro = produto;
        }

        printf("Subtotal: R$ %.2f\n", subtotal);

    } while (produto != 0);

    if (totalProdutos == 0) {
        printf("\nNenhum produto foi comprado.\n");
        return 0;
    }

    printf("\n===== RESUMO DO PEDIDO =====\n");
    printf("Total de produtos: %d\n", totalProdutos);
    printf("Produto mais caro: ");

    switch (produtoMaisCaro) {
        case 1:
            printf("Hamburguer\n");
            break;
        case 2:
            printf("Pizza\n");
            break;
        case 3:
            printf("Cachorro-quente\n");
            break;
        case 4:
            printf("Batata frita\n");
            break;
        case 5:
            printf("Refrigerante\n");
            break;
    }

    printf("Total: R$ %.2f\n", total);

    int pagamento;

    printf("\n===== PAGAMENTO =====\n");
    printf("1 - Dinheiro\n");
    printf("2 - Cartao\n");
    printf("3 - Pix\n");
    printf("Escolha: ");
    scanf("%d", &pagamento);

    switch (pagamento) {
        case 1: {
            float recebido;

            do {
                printf("Valor recebido: R$ ");
                scanf("%f", &recebido);

                if (recebido < total)
                    printf("Valor insuficiente!\n");

            } while (recebido < total);

            printf("Troco: R$ %.2f\n", recebido - total);
            break;
        }

        case 2:
            printf("Pagamento realizado no cartao.\n");
            break;

        case 3:
            printf("Pagamento realizado via Pix.\n");
            break;

        default:
            printf("Forma de pagamento invalida.\n");
    }

    printf("\nPedido finalizado!\n");

    return 0;
}
