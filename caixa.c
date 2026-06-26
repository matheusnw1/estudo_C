
#include <stdio.h>

int main() {

    int valor;
    int nota100, nota50, nota20, nota10, nota5, nota2;

    printf("===============================\n");

    do {
        printf("Digite o valor do saque (minimo R$2): ");
        scanf("%d", &valor);

        if (valor < 2)
            printf("Valor invalido!\n");

    } while (valor < 2);

    if (valor % 2 != 0 && valor < 5) {
        printf("\nNao e possivel sacar esse valor.\n");
        return 0;
    }

    nota100 = valor / 100;
    valor = valor % 100;

    nota50 = valor / 50;
    valor = valor % 50;

    nota20 = valor / 20;
    valor = valor % 20;

    nota10 = valor / 10;
    valor = valor % 10;

    nota5 = valor / 5;
    valor = valor % 5;

    nota2 = valor / 2;
    valor = valor % 2;

    if (valor != 0) {
        printf("\nNao e possivel realizar o saque com as notas disponiveis.\n");
    }
    else {
        printf("\nNotas entregues:\n");

        if (nota100 > 0)
            printf("Notas de R$100: %d\n", nota100);

        if (nota50 > 0)
            printf("Notas de R$50 : %d\n", nota50);

        if (nota20 > 0)
            printf("Notas de R$20 : %d\n", nota20);

        if (nota10 > 0)
            printf("Notas de R$10 : %d\n", nota10);

        if (nota5 > 0)
            printf("Notas de R$5  : %d\n", nota5);

        if (nota2 > 0)
            printf("Notas de R$2  : %d\n", nota2);
    }

    return 0;
}
