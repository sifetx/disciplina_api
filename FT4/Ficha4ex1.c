// Dias da semana

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita um número de 1 a 7: ");
    scanf("%d", &n);
    if (n < 1 || n > 7) {
        printf("Introduz um valor válido!\n");
    } else {
        printf("O número %d corresponde a ", n);
        switch (n) {
        case 1:
            printf("domingo");
            break;
        case 2:
            printf("segunda");
            break;
        case 3:
            printf("terça");
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
            printf("sábado");
            break;
        }
        printf("\n");
    }
    getch();
}
