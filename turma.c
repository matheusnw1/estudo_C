
#include <stdio.h>

int main() {
    float notas[10], total = 0, media, maior, menor;
    int aprovados = 0, reprovados = 0, acimaMedia = 0;
    int aluno;

    printf("=== Analise de Notas com Vetores ===\n\n");

    for (int i = 0; i < 10; i++) {
        do {
            printf("Digite a nota do aluno %d: ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0 || notas[i] > 10)
                printf("Nota invalida! Digite um valor entre 0 e 10.\n");
        } while (notas[i] < 0 || notas[i] > 10);

        total += notas[i];
    }

    media = total / 10;
    maior = notas[0];
    menor = notas[0];

    for (int i = 0; i < 10; i++) {
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
        if (notas[i] >= 6) aprovados++;
        else reprovados++;
        if (notas[i] > media) acimaMedia++;
    }

    float percentualAprov = (aprovados / 10.0) * 100;

    printf("\n=== Notas Digitadas ===\n");
    for (int i = 0; i < 10; i++)
        printf("Aluno %2d: %.1f\n", i + 1, notas[i]);

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota:     %.2f\n", maior);
    printf("Menor nota:     %.2f\n", menor);
    printf("Alunos aprovados:  %d\n", aprovados);
    printf("Alunos reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.0f%%\n", percentualAprov);
    printf("Alunos acima da media:   %d\n", acimaMedia);

    printf("\n=== Consulta Individual ===\n");
    do {
        printf("Digite o numero do aluno (1 a 10): ");
        scanf("%d", &aluno);
        if (aluno < 1 || aluno > 10)
            printf("Numero invalido!\n");
    } while (aluno < 1 || aluno > 10);

    printf("\nAluno %d\n", aluno);
    printf("Nota: %.1f\n", notas[aluno - 1]);
    printf("Situacao: %s\n", notas[aluno - 1] >= 6 ? "Aprovado" : "Reprovado");

    return 0;
}
