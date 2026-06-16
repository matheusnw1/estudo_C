
#include <stdio.h>

int main() {
    int v[10], pares[10], impares[10];
    int i, np = 0, ni = 0;

    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
            pares[np++] = v[i];
        else
            impares[ni++] = v[i];
    }

    printf("\nOriginal: ");
    for (i = 0; i < 10; i++) printf("%d ", v[i]);

    printf("\nPares: ");
    for (i = 0; i < np; i++) printf("%d ", pares[i]);

    printf("\nImpares: ");
    for (i = 0; i < ni; i++) printf("%d ", impares[i]);

    printf("\n");
    return 0;
}
