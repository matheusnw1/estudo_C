
#include <stdio.h>

int main() {

    char nome[50];
    int tipo, diarias;
    int opcao;

    float valorDiaria;
    float valor;
    float desconto;
    float totalBruto = 0;
    float totalDesconto = 0;
    float totalLiquido = 0;

    int hospedes = 0;
    int standard = 0;
    int luxo = 0;
    int suite = 0;

    do {

        printf("\n======= HOTEL =======\n");

        printf("Nome do hospede: ");
        scanf(" %[^\n]", nome);

        printf("\n1 - Standard\n");
        printf("2 - Luxo\n");
        printf("3 - Suite\n");
        printf("Escolha o quarto: ");
        scanf("%d", &tipo);

        switch(tipo) {

            case 1:
                valorDiaria = 120;
                standard++;
                break;

            case 2:
                valorDiaria = 180;
                luxo++;
                break;

            case 3:
                valorDiaria = 250;
                suite++;
                break;

            default:
                printf("Tipo invalido!\n");
                continue;
        }

        printf("Quantidade de diarias: ");
        scanf("%d", &diarias);

        valor = valorDiaria * diarias;
        desconto = 0;

        if(diarias >= 10)
            desconto = valor * 0.20;
        else if(diarias >= 5)
            desconto = valor * 0.10;

        printf("\nHospede: %s\n", nome);
        printf("Valor da hospedagem: R$ %.2f\n", valor);
        printf("Desconto: R$ %.2f\n", desconto);
        printf("Total a pagar: R$ %.2f\n", valor - desconto);

        hospedes++;
        totalBruto += valor;
        totalDesconto += desconto;
        totalLiquido += (valor - desconto);

        printf("\nCadastrar outro hospede?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        scanf("%d", &opcao);

    } while(opcao == 1);

    printf("\n======= RELATORIO FINAL =======\n");
    printf("Hospedes: %d\n", hospedes);
    printf("Quartos Standard: %d\n", standard);
    printf("Quartos Luxo: %d\n", luxo);
    printf("Quartos Suite: %d\n", suite);
    printf("Faturamento bruto: R$ %.2f\n", totalBruto);
    printf("Descontos concedidos: R$ %.2f\n", totalDesconto);
    printf("Faturamento liquido: R$ %.2f\n", totalLiquido);

    return 0;
}
