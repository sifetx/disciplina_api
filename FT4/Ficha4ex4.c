// Meses e dias, copy paste do ex10 da ficha 3 :)

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int mes;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduz o m�s do ano (de 1 a 12): ");
    scanf("%d", &mes);
    switch (mes) {
        case 1:
            printf("Janeiro tem 31 dias\n");
            break;
        case 2:
            printf("Fevereiro tem 28 dias (29 dias nos anos bissextos)\n");
            break;
        case 3:
            printf("Mar�o tem 31\n");
            break;
        case 4:
            printf("Abril tem 30 dias\n");
            break;
        case 5:
            printf("Maio tem 31 dias\n");
            break;
        case 6:
            printf("Junho tem 30 dias\n");
            break;
        case 7:
            printf("Julho tem 31 dias\n");
            break;
        case 8:
            printf("Agosto tem 31 dias\n");
            break;
        case 9:
            printf("Setembro tem 30 dias\n");
            break;
        case 10:
            printf("Outubro tem 31 dias\n");
            break;
        case 11:
            printf("Novembro tem 30 dias\n");
            break;
        case 12:
            printf("Dezembro tem 31 dias\n");
            break;
        default:
            printf("M�s inv�lido, utiliza valores entre 1 a 12\n");
            break;
    }
    getch();
}
