// Letra, número, ou outro caracter

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char c;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduz um caracter: ");
    scanf("%c", &c);
    printf("O caracter introduzido ");
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {     //letra
        printf("É uma letra\n");
    } else if ((c >= '0' && c <= '9')) {     //numero
        printf("é um número\n");
    } else {    //outro caracter
        printf("não é nem uma letra, nem um número\n");
    }
    getch();
}
