#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char utilizador[20], tentativaUtilizador[20];
char pass[20], tentativaPasse[20];
int escolha = 0;

void logar();
void registar();
void menu();

void logar()
{
    system("cls");
    printf("\nDigite o utilizador:\n-> ");
    fgets(tentativaUtilizador, sizeof(tentativaUtilizador), stdin);
    printf("\nDigite a password:\n-> ");
    fgets(tentativaPasse, sizeof(tentativaPasse), stdin);
    system("cls");

    tentativaUtilizador[strcspn(tentativaUtilizador, "\n")] = '\0';
    tentativaPasse[strcspn(tentativaPasse, "\n")] = '\0';

    if (strcmp(utilizador, tentativaUtilizador) == 0 && strcmp(pass, tentativaPasse) == 0) {
        printf("\nLogin realizado com sucesso.\n");
        menupri();
    } else {
        printf("\nUtilizador ou palavra-passe incorretos.\n");
    }
    menu();
}

void registar()
{
    system("cls");
    printf("\nDigite um novo nome de utilizador:\n-> ");
    fgets(utilizador, sizeof(utilizador), stdin);
    printf("\nDigite uma nova palavra-passe:\n-> ");
    fgets(pass, sizeof(pass), stdin);
    system("cls");

    utilizador[strcspn(utilizador, "\n")] = '\0';
    pass[strcspn(pass, "\n")] = '\0';

    printf("\nUtilizador e palavra-passe registados com sucesso.\n");
    menu();
}

void menu()
{
    printf("\n\n1 - Registar\n2 - Logar\n3 - Sair\n-> ");
    scanf("%d", &escolha);
    fflush(stdin);

    switch (escolha) {
        case 1:
            registar();
            break;
        case 2:
            logar();
            break;
        case 3:
            printf("\nPrograma finalizado.\n");
            break;
        default:
            system("cls");
            printf("\nOpcao invalida! Tente novamente.\n");
            menu();
            break;
    }
}



