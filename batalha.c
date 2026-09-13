
#include <stdio.h>

typedef struct {
    char nome[50];
    int vida;
    int ataque;
    int defesa;
    int pocoes;
    int defendendo;
} Jogador;

void atacar(Jogador *atacante, Jogador *defensor) {
    int dano = atacante->ataque - defensor->defesa;

    if (dano < 1)
        dano = 1;

    if (defensor->defendendo)
        dano /= 2;

    if (dano < 1)
        dano = 1;

    defensor->vida -= dano;

    if (defensor->vida < 0)
        defensor->vida = 0;

    printf("%s causou %d de dano!\n", atacante->nome, dano);
}

void defender(Jogador *jogador) {
    jogador->defendendo = 1;
    printf("%s entrou em modo de defesa!\n", jogador->nome);
}

void usarPocao(Jogador *jogador) {
    if (jogador->pocoes <= 0) {
        printf("Sem pocoes disponiveis!\n");
        return;
    }

    if (jogador->vida == 100) {
        printf("A vida ja esta cheia!\n");
        return;
    }

    jogador->vida += 20;

    if (jogador->vida > 100)
        jogador->vida = 100;

    jogador->pocoes--;

    printf("%s recuperou vida!\n", jogador->nome);
}

int main() {

    Jogador jogadores[2];

    for (int i = 0; i < 2; i++) {
        printf("\n===== JOGADOR %d =====\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", jogadores[i].nome);

        printf("Ataque: ");
        scanf("%d", &jogadores[i].ataque);

        printf("Defesa: ");
        scanf("%d", &jogadores[i].defesa);

        jogadores[i].vida = 100;
        jogadores[i].pocoes = 3;
        jogadores[i].defendendo = 0;
    }

    int turno = 0;
    int rodadas = 0;

    while (jogadores[0].vida > 0 && jogadores[1].vida > 0) {

        int adversario = 1 - turno;
        int opcao;

        jogadores[turno].defendendo = 0;

        printf("\n============================\n");
        printf("Rodada %d\n", rodadas + 1);
        printf("%s: %d HP\n",
               jogadores[0].nome, jogadores[0].vida);
        printf("%s: %d HP\n",
               jogadores[1].nome, jogadores[1].vida);
        printf("============================\n");

        printf("\nTurno de %s\n", jogadores[turno].nome);
        printf("1 - Atacar\n");
        printf("2 - Defender\n");
        printf("3 - Usar pocao\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            atacar(&jogadores[turno], &jogadores[adversario]);
        } else if (opcao == 2) {
            defender(&jogadores[turno]);
        } else if (opcao == 3) {
            usarPocao(&jogadores[turno]);
        } else {
            printf("Opcao invalida!\n");
            continue;
        }

        turno = adversario;
        rodadas++;
    }

    int vencedor;

    if (jogadores[0].vida > 0)
        vencedor = 0;
    else
        vencedor = 1;

    printf("\n===== FIM DA BATALHA =====\n");
    printf("Vencedor: %s\n", jogadores[vencedor].nome);
    printf("Vida restante: %d HP\n", jogadores[vencedor].vida);
    printf("Rodadas: %d\n", rodadas);

    return 0;
}
