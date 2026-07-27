
#include <stdio.h>
#include <string.h>

int main() {

    char livros[10][30] = {
        "Dom Casmurro",
        "O Pequeno Principe",
        "Harry Potter",
        "O Hobbit",
        "1984",
        "A Revolucao dos Bichos",
        "Dom Quixote",
        "O Cortico",
        "Percy Jackson",
        "Codigo Limpo"
    };

    char responsavel[10][50] = {""};

    int status[10] = {0}; // 0 = Disponivel | 1 = Emprestado

    int opcao, livro;

    do {

        printf("\n========== BIBLIOTECA ==========\n");
        printf("1 - Emprestar livro\n");
        printf("2 - Devolver livro\n");
        printf("3 - Consultar livro\n");
        printf("4 - Listar livros disponiveis\n");
        printf("5 - Listar livros emprestados\n");
        printf("6 - Sair\n");

        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao){

        case 1:

            printf("\nLivros:\n");

            for(int i=0;i<10;i++)
                printf("%d - %s\n",i+1,livros[i]);

            printf("\nEscolha o livro: ");
            scanf("%d",&livro);

            if(livro < 1 || livro > 10){
                printf("Livro invalido!\n");
                break;
            }

            livro--;

            if(status[livro]==1){
                printf("Livro ja emprestado!\n");
            }
            else{

                printf("Nome do responsavel: ");
                scanf(" %[^\n]",responsavel[livro]);

                status[livro]=1;

                printf("Emprestimo realizado!\n");
            }

            break;

        case 2:

            printf("Numero do livro: ");
            scanf("%d",&livro);

            if(livro<1 || livro>10){
                printf("Livro invalido!\n");
                break;
            }

            livro--;

            if(status[livro]==0){
                printf("Esse livro ja esta disponivel.\n");
            }
            else{

                status[livro]=0;
                strcpy(responsavel[livro],"");

                printf("Livro devolvido com sucesso!\n");
            }

            break;

        case 3:

            printf("Numero do livro: ");
            scanf("%d",&livro);

            if(livro<1 || livro>10){
                printf("Livro invalido!\n");
                break;
            }

            livro--;

            printf("\nLivro: %s\n",livros[livro]);

            if(status[livro]==0){
                printf("Status: Disponivel\n");
            }
            else{
                printf("Status: Emprestado\n");
                printf("Responsavel: %s\n",responsavel[livro]);
            }

            break;

        case 4:

            printf("\n===== LIVROS DISPONIVEIS =====\n");

            for(int i=0;i<10;i++){

                if(status[i]==0){
                    printf("%d - %s\n",i+1,livros[i]);
                }

            }

            break;

        case 5:

            printf("\n===== LIVROS EMPRESTADOS =====\n");

            for(int i=0;i<10;i++){

                if(status[i]==1){
                    printf("%d - %s -> %s\n",i+1,livros[i],responsavel[i]);
                }

            }

            break;

        case 6:

            printf("Encerrando sistema...\n");
            break;

        default:

            printf("Opcao invalida!\n");

        }

    }while(opcao!=6);

    return 0;
}
