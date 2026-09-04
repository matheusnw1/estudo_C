
#include <stdio.h>

int verificarTransacao(float valor, int hora, float distancia) {
    if ((valor > 2000 && hora >= 0 && hora <= 5) ||
        distancia > 500 ||
        valor > 5000) {
        return 1;
    }

    return 0;
}

int main() {

    float valor, maiorValor = 0;
    float distancia;
    int hora;
    int suspeitas = 0;
    int transacaoMaior = 0;

    for (int i = 1; i <= 10; i++) {

        printf("\nTransacao %d\n", i);

        printf("Valor: R$ ");
        scanf("%f", &valor);

        printf("Hora (0-23): ");
        scanf("%d", &hora);

        printf("Distancia desde a ultima transacao (km): ");
        scanf("%f", &distancia);

        if (verificarTransacao(valor, hora, distancia)) {
            printf("Transacao SUSPEITA!\n");
            suspeitas++;
        } else {
            printf("Transacao normal.\n");
        }

        if (valor > maiorValor) {
            maiorValor = valor;
            transacaoMaior = i;
        }
    }

    float percentual = (suspeitas * 100.0) / 10;

    printf("\n===== RELATORIO =====\n");
    printf("Transacoes suspeitas: %d\n", suspeitas);
    printf("Percentual suspeito: %.2f%%\n", percentual);
    printf("Maior valor: R$ %.2f\n", maiorValor);
    printf("Transacao de maior valor: %d\n", transacaoMaior);

    if (suspeitas >= 4)
        printf("STATUS: CONTA BLOQUEADA\n");
    else
        printf("STATUS: CONTA NORMAL\n");

    return 0;
}
