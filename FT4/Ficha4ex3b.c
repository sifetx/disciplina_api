// Vogal ou não, usando switch

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
            printf("O caracter introduzido é uma vogal\n");
            break;
        default:
            printf("O caracter introduzido não é uma vogal, ou não pertence ao alfabeto\n");
    }
    getch();
}
