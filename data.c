
#include <stdio.h>

int bissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int diasMes(int mes, int ano) {
    int dias[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && bissexto(ano))
        return 29;

    return dias[mes];
}

int dataValida(int dia, int mes, int ano) {
    if (ano < 1 || mes < 1 || mes > 12)
        return 0;

    if (dia < 1 || dia > diasMes(mes, ano))
        return 0;

    return 1;
}

long long converterDias(int dia, int mes, int ano) {
    long long total = 0;

    for (int i = 1; i < ano; i++) {
        total += bissexto(i) ? 366 : 365;
    }

    for (int i = 1; i < mes; i++) {
        total += diasMes(i, ano);
    }

    total += dia;

    return total;
}

int diaSemana(int dia, int mes, int ano) {
    int ajuste;

    if (mes < 3) {
        mes += 12;
        ano--;
    }

    ajuste = (dia + 2 * mes + 3 * (mes + 1) / 5 +
              ano + ano / 4 - ano / 100 + ano / 400 + 1) % 7;

    return ajuste;
}

void mostrarDiaSemana(int dia, int mes, int ano) {
    char *dias[] = {
        "domingo",
        "segunda-feira",
        "terca-feira",
        "quarta-feira",
        "quinta-feira",
        "sexta-feira",
        "sabado"
    };

    printf("%s", dias[diaSemana(dia, mes, ano)]);
}

int main() {

    int d1, m1, a1;
    int d2, m2, a2;

    printf("Digite a primeira data: ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Digite a segunda data: ");
    scanf("%d %d %d", &d2, &m2, &a2);

    if (!dataValida(d1, m1, a1) || !dataValida(d2, m2, a2)) {
        printf("\nUma ou ambas as datas sao invalidas.\n");
        return 0;
    }

    long long total1 = converterDias(d1, m1, a1);
    long long total2 = converterDias(d2, m2, a2);

    printf("\n===== RESULTADO =====\n");

    printf("Data 1: ");
    mostrarDiaSemana(d1, m1, a1);

    printf("\nData 2: ");
    mostrarDiaSemana(d2, m2, a2);

    long long diferenca = total1 - total2;

    if (diferenca < 0)
        diferenca = -diferenca;

    printf("\nDiferenca: %lld dias\n", diferenca);

    if (bissexto(a1))
        printf("%d e bissexto.\n", a1);

    if (bissexto(a2) && a2 != a1)
        printf("%d e bissexto.\n", a2);

    if (total1 < total2)
        printf("A primeira data e mais antiga.\n");
    else if (total2 < total1)
        printf("A segunda data e mais antiga.\n");
    else
        printf("As duas datas sao iguais.\n");

    return 0;
}
