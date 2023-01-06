// Maiusculas e minusculas

#include <stdio.h>
#include <conio.h>
#include <windows.h>

char c;

int main() {
    SetConsoleOutputCP(65001);
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
