// Vogal ou não, usando if... else...

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char c;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita um caracter: ");
    scanf("%c", &c);
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
        printf("O caracter introduzido é uma vogal\n");
    } else {
        printf("O caracter introduzido não é uma vogal, ou não pertence ao alfabeto\n");
    }
    getch();
}
