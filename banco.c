
#include <stdio.h>

int main() {

    float saldo = 1000.00;
    float valor;

    int opcao;
    int senha = 1234;
    int senhaDigitada;
    int novaSenha;

    do {

        printf("\n===== BANCO =====\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Alterar senha\n");
        printf("5 - Sair\n");

        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:

                printf("\nSaldo: R$ %.2f\n", saldo);
                break;

            case 2:

                printf("Valor do deposito: R$ ");
                scanf("%f", &valor);

                if(valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado!\n");
                }
                else {
                    printf("Valor invalido!\n");
                }

                break;

            case 3:

                printf("Digite a senha: ");
                scanf("%d", &senhaDigitada);

                if(senhaDigitada != senha) {
                    printf("Senha incorreta!\n");
                    break;
                }

                printf("Valor do saque: R$ ");
                scanf("%f", &valor);

                if(valor <= 0)
                    printf("Valor invalido!\n");
                else if(valor > saldo)
                    printf("Saldo insuficiente!\n");
                else {
                    saldo -= valor;
                    printf("Saque realizado!\n");
                }

                break;

            case 4:

                printf("Digite a senha atual: ");
                scanf("%d", &senhaDigitada);

                if(senhaDigitada == senha) {

                    printf("Digite a nova senha: ");
                    scanf("%d", &novaSenha);

                    senha = novaSenha;

                    printf("Senha alterada com sucesso!\n");
                }
                else {
                    printf("Senha incorreta!\n");
                }

                break;

            case 5:

                printf("Obrigado por utilizar o banco!\n");
                break;

            default:

                printf("Opcao invalida!\n");

        }

    } while(opcao != 5);

    return 0;
}
