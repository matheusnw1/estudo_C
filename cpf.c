
#include <stdio.h>

int main() {

    int cpf[11];
    int soma = 0;
    int resto;
    int digito1, digito2;

    printf("Digite os 11 digitos do CPF (sem pontos e traco):\n");

    for(int i = 0; i < 11; i++) {
        scanf("%d", &cpf[i]);

        if(cpf[i] < 0 || cpf[i] > 9) {
            printf("Digito invalido!\n");
            return 0;
        }
    }

    // Calcula o primeiro dígito verificador
    soma = 0;

    for(int i = 0; i < 9; i++) {
        soma += cpf[i] * (10 - i);
    }

    resto = (soma * 10) % 11;

    if(resto == 10)
        resto = 0;

    digito1 = resto;

    // Calcula o segundo dígito verificador
    soma = 0;

    for(int i = 0; i < 10; i++) {
        soma += cpf[i] * (11 - i);
    }

    resto = (soma * 10) % 11;

    if(resto == 10)
        resto = 0;

    digito2 = resto;

    printf("\nPrimeiro digito calculado: %d\n", digito1);
    printf("Segundo digito calculado: %d\n", digito2);

    if(digito1 == cpf[9] && digito2 == cpf[10]) {
        printf("\nCPF VALIDO!\n");
    }
    else {
        printf("\nCPF INVALIDO!\n");
    }

    return 0;
}
