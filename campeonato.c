
#include <stdio.h>

int main() {

    char time1[30], time2[30];
    int gols1, gols2;

    int vitorias1 = 0;
    int vitorias2 = 0;
    int empates = 0;

    int totalGols = 0;
    int maiorGols = -1;
    int partidaMaior = 0;

    printf("===== CAMPEONATO =====\n\n");

    for(int i = 1; i <= 5; i++) {

        printf("Partida %d\n", i);

        printf("Time 1: ");
        scanf(" %[^\n]", time1);

        printf("Gols do %s: ", time1);
        scanf("%d", &gols1);

        printf("Time 2: ");
        scanf(" %[^\n]", time2);

        printf("Gols do %s: ", time2);
        scanf("%d", &gols2);

        totalGols += gols1 + gols2;

        if(gols1 > gols2)
            vitorias1++;
        else if(gols2 > gols1)
            vitorias2++;
        else
            empates++;

        if((gols1 + gols2) > maiorGols){
            maiorGols = gols1 + gols2;
            partidaMaior = i;
        }

        printf("\n");
    }

    printf("\n========== RELATORIO ==========\n");

    printf("Vitorias do Time 1: %d\n", vitorias1);
    printf("Vitorias do Time 2: %d\n", vitorias2);
    printf("Empates: %d\n", empates);

    printf("Total de gols: %d\n", totalGols);
    printf("Media de gols: %.2f\n", totalGols / 5.0);

    printf("Partida com mais gols: %d\n", partidaMaior);
    printf("Quantidade de gols nessa partida: %d\n", maiorGols);

    return 0;
}
