
#include <stdio.h>

int main() {

    int linhas;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("\nTorre Crescente:\n");

    for(int i = 1; i <= linhas; i++) {

        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\nTorre Decrescente:\n");

    for(int i = linhas; i >= 1; i--) {

        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
