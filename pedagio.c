
#include <stdio.h>

int main() {

    int opcao;

    int motos = 0;
    int carros = 0;
    int caminhoes = 0;
    int onibus = 0;

    int totalVeiculos = 0;

    float arrecadacao = 0;

    do{

        printf("\n===== PEDAGIO =====\n");
        printf("1 - Moto (R$ 5,00)\n");
        printf("2 - Carro (R$ 12,00)\n");
        printf("3 - Caminhao (R$ 25,00)\n");
        printf("4 - Onibus (R$ 18,00)\n");
        printf("0 - Encerrar\n");

        printf("Opcao: ");
        scanf("%d",&opcao);

        switch(opcao){

            case 1:
                motos++;
                arrecadacao += 5;
                totalVeiculos++;
                break;

            case 2:
                carros++;
                arrecadacao += 12;
                totalVeiculos++;
                break;

            case 3:
                caminhoes++;
                arrecadacao += 25;
                totalVeiculos++;
                break;

            case 4:
                onibus++;
                arrecadacao += 18;
                totalVeiculos++;
                break;

            case 0:
                break;

            default:
                printf("Opcao invalida!\n");

        }

    }while(opcao != 0);

    printf("\n======= RELATORIO =======\n");

    printf("Motos: %d\n", motos);
    printf("Carros: %d\n", carros);
    printf("Caminhoes: %d\n", caminhoes);
    printf("Onibus: %d\n", onibus);

    printf("Total de veiculos: %d\n", totalVeiculos);
    printf("Arrecadacao: R$ %.2f\n", arrecadacao);

    if(totalVeiculos > 0)
        printf("Media por veiculo: R$ %.2f\n", arrecadacao / totalVeiculos);

    if(motos > carros && motos > caminhoes && motos > onibus)
        printf("Veiculo mais frequente: Moto\n");
    else if(carros > motos && carros > caminhoes && carros > onibus)
        printf("Veiculo mais frequente: Carro\n");
    else if(caminhoes > motos && caminhoes > carros && caminhoes > onibus)
        printf("Veiculo mais frequente: Caminhao\n");
    else if(onibus > motos && onibus > carros && onibus > caminhoes)
        printf("Veiculo mais frequente: Onibus\n");
    else
        printf("Houve empate entre os tipos de veiculos.\n");

    return 0;
}
