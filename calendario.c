
#include <stdio.h>

int main() {

    int mes;
    int bissexto;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    switch(mes){

        case 1:
            printf("Janeiro\n31 dias");
            break;

        case 2:
            printf("Fevereiro\n");
            printf("O ano e bissexto? (1-Sim / 0-Nao): ");
            scanf("%d",&bissexto);

            if(bissexto)
                printf("29 dias");
            else
                printf("28 dias");
            break;

        case 3:
            printf("Marco\n31 dias");
            break;

        case 4:
            printf("Abril\n30 dias");
            break;

        case 5:
            printf("Maio\n31 dias");
            break;

        case 6:
            printf("Junho\n30 dias");
            break;

        case 7:
            printf("Julho\n31 dias");
            break;

        case 8:
            printf("Agosto\n31 dias");
            break;

        case 9:
            printf("Setembro\n30 dias");
            break;

        case 10:
            printf("Outubro\n31 dias");
            break;

        case 11:
            printf("Novembro\n30 dias");
            break;

        case 12:
            printf("Dezembro\n31 dias");
            break;

        default:
            printf("Mes invalido.");
    }

    return 0;
}
