// Letra, n�mero, ou outro caracter

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
        printf("� uma letra\n");
    } else if ((c >= '0' && c <= '9')) {     //numero
        printf("� um n�mero\n");
    } else {    //outro caracter
        printf("n�o � nem uma letra, nem um n�mero\n");
    }
    getch();
}
