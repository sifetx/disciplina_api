// Letra, número, ou outro caracter

#include <stdio.h>
#include <conio.h>
#include <windows.h>

char c;

int main() {
    SetConsoleOutputCP(65001);
    printf("Introduz um caracter: ");
    scanf("%c", &c);
    printf("O caracter introduzido ");
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {     //letra
        printf("é uma letra\n");
    } else if ((c >= '0' && c <= '9')) {     //numero
        printf("é um número\n");
    } else {    //outro caracter
        printf("não é nem uma letra, nem um número\n");
    }
    getch();
}
