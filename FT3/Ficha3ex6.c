// Maiusculas e minusculas

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char c;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduz um caracter: ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z')) {     //minusculas para maiusculas
        printf("%c »» %c\n", c, (int)c-32);
    } else if ((c >= 'A' && c <= 'Z')) {     //maiusculas para minusculas
        printf("%c »» %c\n", c, (int)c+32);
    } else {
        printf("O caracter introduzido não pertence ao alfabeto\n");
    }
    getch();
}
