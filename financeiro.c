
#include <stdio.h>

int main() {

    float valor, juros;
    float saldo;
    int meses;

    printf("Valor do emprestimo: R$ ");
    scanf("%f", &valor);

    printf("Taxa de juros mensal (%%): ");
    scanf("%f", &juros);

    printf("Quantidade de meses: ");
    scanf("%d", &meses);

    saldo = valor;

    printf("\n------------------------------\n");
    printf("Mes\tSaldo Devedor\n");
    printf("------------------------------\n");

    for(int i = 1; i <= meses; i++) {

        saldo += saldo * (juros / 100);

        printf("%d\tR$ %.2f\n", i, saldo);
    }

    printf("\n------------------------------\n");
    printf("Valor inicial: R$ %.2f\n", valor);
    printf("Valor final:   R$ %.2f\n", saldo);
    printf("Juros pagos:   R$ %.2f\n", saldo - valor);

    return 0;
}
