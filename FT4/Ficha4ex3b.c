// Vogal ou n�o, usando switch

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char c;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita um caracter: ");
    scanf("%c", &c);
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("O caracter introduzido � uma vogal\n");
            break;
        default:
            printf("O caracter introduzido n�o � uma vogal, ou n�o pertence ao alfabeto\n");
    }
    getch();
}
