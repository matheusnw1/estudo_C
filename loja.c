
#include <stdio.h>

int main() {

    int opcao;
    float preco = 0;
    float pagamento;

    printf("======= MAQUINA DE VENDAS =======\n");
    printf("1 - Refrigerante  R$8.00\n");
    printf("2 - Suco          R$6.00\n");
    printf("3 - Agua          R$3.00\n");
    printf("4 - Sair\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){

        case 1:
            preco = 8;
            break;

        case 2:
            preco = 6;
            break;

        case 3:
            preco = 3;
            break;

        case 4:
            printf("Programa encerrado.\n");
            return 0;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    printf("Digite o valor pago: R$");
    scanf("%f", &pagamento);

    if(pagamento < preco){
        printf("\nDinheiro insuficiente!\n");
        printf("Faltam R$%.2f\n", preco - pagamento);
    }
    else{
        printf("\nCompra realizada!\n");
        printf("Troco: R$%.2f\n", pagamento - preco);
    }

    return 0;
}
