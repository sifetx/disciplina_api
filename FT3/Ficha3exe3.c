// Comparar caracter

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char c;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Insere um caracter: ");
    scanf("%c", &c);
    (c == 'a' || c == 'A') ? printf("Parabéns!! Acertou!!!\n") : printf("Oh... Fica para a próxima...\n");
    getch();
}
