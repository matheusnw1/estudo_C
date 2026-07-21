
#include <stdio.h>

int main() {

    int voto;
    int joao = 0, maria = 0, pedro = 0, ana = 0;
    int branco = 0, nulo = 0;
    int total = 0;

    printf("===== ELEICAO =====\n");

    do {

        printf("\n1 - Joao");
        printf("\n2 - Maria");
        printf("\n3 - Pedro");
        printf("\n4 - Ana");
        printf("\n5 - Branco");
        printf("\n6 - Nulo");
        printf("\n0 - Encerrar");

        printf("\n\nSeu voto: ");
        scanf("%d", &voto);

        switch(voto) {

            case 1:
                joao++;
                total++;
                break;

            case 2:
                maria++;
                total++;
                break;

            case 3:
                pedro++;
                total++;
                break;

            case 4:
                ana++;
                total++;
                break;

            case 5:
                branco++;
                total++;
                break;

            case 6:
                nulo++;
                total++;
                break;

            case 0:
                break;

            default:
                printf("Voto invalido!\n");
        }

    } while(voto != 0);

    printf("\n===== RESULTADO =====\n");

    printf("Joao: %d\n", joao);
    printf("Maria: %d\n", maria);
    printf("Pedro: %d\n", pedro);
    printf("Ana: %d\n", ana);

    printf("Brancos: %d\n", branco);
    printf("Nulos: %d\n", nulo);

    printf("Total de votos: %d\n", total);

    int validos = joao + maria + pedro + ana;

    printf("Votos validos: %d\n", validos);

    if(total > 0)
        printf("Percentual de votos validos: %.2f%%\n", (validos * 100.0) / total);

    if(joao > maria && joao > pedro && joao > ana)
        printf("Vencedor: Joao\n");
    else if(maria > joao && maria > pedro && maria > ana)
        printf("Vencedor: Maria\n");
    else if(pedro > joao && pedro > maria && pedro > ana)
        printf("Vencedor: Pedro\n");
    else if(ana > joao && ana > maria && ana > pedro)
        printf("Vencedor: Ana\n");
    else
        printf("Empate entre candidatos.\n");

    return 0;
}
