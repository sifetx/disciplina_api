// Vogal ou n�o, usando if... else...

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char c;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita um caracter: ");
    scanf("%c", &c);
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
        printf("O caracter introduzido � uma vogal\n");
    } else {
        printf("O caracter introduzido n�o � uma vogal, ou n�o pertence ao alfabeto\n");
    }
    getch();
}
