// Dias da semana

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita um n�mero de 1 a 7: ");
    scanf("%d", &n);
    if (n < 1 || n > 7) {
        printf("Introduz um valor v�lido!\n");
    } else {
        printf("O n�mero %d corresponde a ", n);
        switch (n) {
        case 1:
            printf("domingo");
            break;
        case 2:
            printf("segunda");
            break;
        case 3:
            printf("ter�a");
            break;
        case 4:
            printf("quarta");
            break;
        case 5:
            printf("quinta");
            break;
        case 6:
            printf("sexta");
            break;
        case 7:
            printf("s�bado");
            break;
        }
        printf("\n");
    }
    getch();
}
