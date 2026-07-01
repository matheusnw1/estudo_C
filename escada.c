
#include <stdio.h>

int main() {

    int linhas;

    printf("Digite um numero: ");
    scanf("%d", &linhas);

    printf("\n");

    for(int i = 1; i <= linhas; i++) {

        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
