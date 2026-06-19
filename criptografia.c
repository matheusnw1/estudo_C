
#include <stdio.h>
#include <string.h>

int ehVogal(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

int main() {
    char palavra[11], cripto[11];
    int i;

    printf("Digite uma palavra (ate 10 caracteres): ");
    scanf("%10s", palavra);

    for (i = 0; i < strlen(palavra); i++)
        cripto[i] = ehVogal(palavra[i]) ? '*' : palavra[i];
    cripto[strlen(palavra)] = '\0';

    printf("Original:      %s\n", palavra);
    printf("Criptografada: %s\n", cripto);
    return 0;
}
