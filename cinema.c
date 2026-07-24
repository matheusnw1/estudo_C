
#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    int quantidade;
    int opcao;

    float totalCompra;
    float faturamento = 0;

    int clientes = 0;
    int ingressos = 0;
    int meia = 0;
    int inteira = 0;

    do{

        printf("\n===== CINEMA =====\n");

        printf("Nome: ");
        scanf(" %[^\n]", nome);

        printf("Idade: ");
        scanf("%d",&idade);

        printf("Quantidade de ingressos: ");
        scanf("%d",&quantidade);

        if(idade < 18){

            totalCompra = quantidade * 15;
            meia++;

            printf("\nTipo: Meia-entrada\n");

        }else{

            totalCompra = quantidade * 30;
            inteira++;

            printf("\nTipo: Inteira\n");

        }

        printf("Cliente: %s\n", nome);
        printf("Valor da compra: R$ %.2f\n", totalCompra);

        faturamento += totalCompra;
        clientes++;
        ingressos += quantidade;

        printf("\nNova compra?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        scanf("%d",&opcao);

    }while(opcao == 1);

    printf("\n======= RELATORIO =======\n");

    printf("Clientes: %d\n", clientes);
    printf("Ingressos vendidos: %d\n", ingressos);
    printf("Clientes meia: %d\n", meia);
    printf("Clientes inteira: %d\n", inteira);
    printf("Faturamento: R$ %.2f\n", faturamento);

    return 0;
}
