
#include <stdio.h>

int main() {
    float nota, total = 0, maior, menor, media;
    int insuficiente = 0, recuperacao = 0, aprovado = 0, excelente = 0;

    printf("=== Analise de Desempenho de Alunos ===\n\n");

    for (int i = 1; i <= 15; i++) {
        do {
            printf("Digite a nota do aluno %d (0 a 10): ", i);
            scanf("%f", &nota);
            if (nota < 0 || nota > 10)
                printf("Nota invalida! Digite um valor entre 0 e 10.\n");
        } while (nota < 0 || nota > 10);

        total += nota;

        if (i == 1) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }

        if (nota < 4.0) {
            insuficiente++;
            printf("Situacao: Desempenho insuficiente\n\n");
        } else if (nota < 6.0) {
            recuperacao++;
            printf("Situacao: Em recuperacao\n\n");
        } else if (nota < 9.0) {
            aprovado++;
            printf("Situacao: Aprovado\n\n");
        } else {
            excelente++;
            printf("Situacao: Excelente\n\n");
        }
    }

    media = total / 15;
    int totalAprovados = aprovado + excelente;
    float percentual = (totalAprovados / 15.0) * 100;

    printf("=== Relatorio Final ===\n");
    printf("Desempenho insuficiente: %d aluno(s)\n", insuficiente);
    printf("Em recuperacao:          %d aluno(s)\n", recuperacao);
    printf("Aprovado:                %d aluno(s)\n", aprovado);
    printf("Excelente:               %d aluno(s)\n", excelente);
    printf("Media geral da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Percentual de aprovados (nota >= 6): %.1f%%\n", percentual);

    return 0;
}
