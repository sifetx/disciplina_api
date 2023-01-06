// Comparar caracter

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char c;

int main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Insere um caracter: ");
    scanf("%c", &c);
    (c == 'a' || c == 'A') ? wprintf(L"Parabéns!! Acertou!!!\n") : wprintf(L"Oh... Fica para a próxima...\n");
    getch();
}
