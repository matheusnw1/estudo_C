
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float peso;
    int quantidade;
    float valor;
} Item;

void cadastrar(Item inventario[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("\nItem %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", inventario[i].nome);

        printf("Peso por unidade (kg): ");
        scanf("%f", &inventario[i].peso);

        printf("Quantidade: ");
        scanf("%d", &inventario[i].quantidade);

        printf("Valor por unidade: R$ ");
        scanf("%f", &inventario[i].valor);
    }
}

int buscarItem(Item inventario[], int tamanho, char nome[]) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(inventario[i].nome, nome) == 0)
            return i;
    }

    return -1;
}

int main() {

    Item inventario[10];

    float pesoTotal = 0;
    float valorTotal = 0;
    float maiorValor = -1;
    float maiorPeso = -1;

    int indiceMaiorValor = 0;
    int indiceMaisPesado = 0;

    cadastrar(inventario, 10);

    for (int i = 0; i < 10; i++) {

        float pesoItem = inventario[i].peso * inventario[i].quantidade;
        float valorItem = inventario[i].valor * inventario[i].quantidade;

        pesoTotal += pesoItem;
        valorTotal += valorItem;

        if (valorItem > maiorValor) {
            maiorValor = valorItem;
            indiceMaiorValor = i;
        }

        if (pesoItem > maiorPeso) {
            maiorPeso = pesoItem;
            indiceMaisPesado = i;
        }
    }

    printf("\n===== INVENTARIO =====\n");
    printf("Peso total: %.2f kg\n", pesoTotal);
    printf("Valor total: R$ %.2f\n", valorTotal);

    printf("\nItem de maior valor: %s\n", inventario[indiceMaiorValor].nome);
    printf("Valor: R$ %.2f\n", maiorValor);

    printf("\nItem mais pesado: %s\n", inventario[indiceMaisPesado].nome);
    printf("Peso: %.2f kg\n", maiorPeso);

    printf("\n===== ITENS ESGOTADOS =====\n");

    int encontrou = 0;

    for (int i = 0; i < 10; i++) {
        if (inventario[i].quantidade == 0) {
            printf("%s\n", inventario[i].nome);
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum item esgotado.\n");

    if (pesoTotal > 30)
        printf("\nLIMITE DE PESO EXCEDIDO!\n");
    else
        printf("\nPeso dentro do limite.\n");

    char nome[50];
    int quantidade;

    printf("\nDigite o nome do item para remover: ");
    scanf(" %[^\n]", nome);

    int indice = buscarItem(inventario, 10, nome);

    if (indice == -1) {
        printf("Item nao encontrado.\n");
    } else {
        printf("Quantidade para remover: ");
        scanf("%d", &quantidade);

        if (quantidade <= 0) {
            printf("Quantidade invalida.\n");
        } else if (quantidade > inventario[indice].quantidade) {
            printf("Quantidade insuficiente no inventario.\n");
        } else {
            inventario[indice].quantidade -= quantidade;
            printf("Item atualizado com sucesso.\n");
            printf("Quantidade restante: %d\n",
                   inventario[indice].quantidade);
        }
    }

    return 0;
}
