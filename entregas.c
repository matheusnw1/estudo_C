
#include <stdio.h>

#define MAX 10

typedef struct {
    int codigo;
    char cliente[50];
    float distancia;
    float peso;
    int status;
} Entrega;

void mostrarStatus(int status) {
    switch (status) {
        case 1:
            printf("Pendente");
            break;
        case 2:
            printf("Em transporte");
            break;
        case 3:
            printf("Entregue");
            break;
    }
}

void cadastrar(Entrega entregas[], int *total) {
    if (*total >= MAX) {
        printf("\nLimite de entregas atingido!\n");
        return;
    }

    int codigo;
    printf("\nCodigo: ");
    scanf("%d", &codigo);

    for (int i = 0; i < *total; i++) {
        if (entregas[i].codigo == codigo) {
            printf("Codigo ja cadastrado!\n");
            return;
        }
    }

    entregas[*total].codigo = codigo;

    printf("Nome do cliente: ");
    scanf(" %[^\n]", entregas[*total].cliente);

    printf("Distancia em km: ");
    scanf("%f", &entregas[*total].distancia);

    printf("Peso da encomenda em kg: ");
    scanf("%f", &entregas[*total].peso);

    entregas[*total].status = 1;

    (*total)++;

    printf("Entrega cadastrada!\n");
}

void listar(Entrega entregas[], int total) {
    if (total == 0) {
        printf("\nNenhuma entrega cadastrada.\n");
        return;
    }

    printf("\n===== ENTREGAS =====\n");

    for (int i = 0; i < total; i++) {
        printf("\nCodigo: %d\n", entregas[i].codigo);
        printf("Cliente: %s\n", entregas[i].cliente);
        printf("Distancia: %.2f km\n", entregas[i].distancia);
        printf("Peso: %.2f kg\n", entregas[i].peso);
        printf("Status: ");
        mostrarStatus(entregas[i].status);
        printf("\n");
    }
}

void buscar(Entrega entregas[], int total) {
    int codigo;

    printf("\nDigite o codigo: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total; i++) {
        if (entregas[i].codigo == codigo) {
            printf("\nCodigo: %d\n", entregas[i].codigo);
            printf("Cliente: %s\n", entregas[i].cliente);
            printf("Distancia: %.2f km\n", entregas[i].distancia);
            printf("Peso: %.2f kg\n", entregas[i].peso);
            printf("Status: ");
            mostrarStatus(entregas[i].status);
            printf("\n");
            return;
        }
    }

    printf("Entrega nao encontrada!\n");
}

void alterarStatus(Entrega entregas[], int total) {
    int codigo;
    int novoStatus;

    printf("\nDigite o codigo: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total; i++) {
        if (entregas[i].codigo == codigo) {
            printf("\n1 - Pendente\n");
            printf("2 - Em transporte\n");
            printf("3 - Entregue\n");
            printf("Novo status: ");
            scanf("%d", &novoStatus);

            switch (novoStatus) {
                case 1:
                case 2:
                case 3:
                    entregas[i].status = novoStatus;
                    printf("Status alterado!\n");
                    return;

                default:
                    printf("Status invalido!\n");
                    return;
            }
        }
    }

    printf("Entrega nao encontrada!\n");
}

void estatisticas(Entrega entregas[], int total) {
    if (total == 0) {
        printf("\nNenhuma entrega cadastrada.\n");
        return;
    }

    int entregues = 0;
    int pendentes = 0;
    float maiorDistancia = entregas[0].distancia;
    float somaPeso = 0;

    for (int i = 0; i < total; i++) {
        if (entregas[i].status == 3)
            entregues++;

        if (entregas[i].status == 1)
            pendentes++;

        if (entregas[i].distancia > maiorDistancia)
            maiorDistancia = entregas[i].distancia;

        somaPeso += entregas[i].peso;
    }

    printf("\n===== ESTATISTICAS =====\n");
    printf("Total de entregas: %d\n", total);
    printf("Entregues: %d\n", entregues);
    printf("Pendentes: %d\n", pendentes);
    printf("Maior distancia: %.2f km\n", maiorDistancia);
    printf("Peso medio: %.2f kg\n", somaPeso / total);
}

int main() {
    Entrega entregas[MAX];
    int total = 0;
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar entrega\n");
        printf("2 - Listar entregas\n");
        printf("3 - Buscar entrega pelo codigo\n");
        printf("4 - Alterar status\n");
        printf("5 - Mostrar estatisticas\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(entregas, &total);
                break;

            case 2:
                listar(entregas, total);
                break;

            case 3:
                buscar(entregas, total);
                break;

            case 4:
                alterarStatus(entregas, total);
                break;

            case 5:
                estatisticas(entregas, total);
                break;

            case 0:
                printf("\nPrograma encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
