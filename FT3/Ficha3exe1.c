// Número par ou impar

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n;

int main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Introduz um número inteiro: ");
    scanf("%d", &n);

    // Operador ternário
    (n % 2 == 0) ? wprintf(L"%d é um número par", n): wprintf(L"%d é um número impar", n); 

    /* Estrutura condicional normal
    if(n % 2 == 0) {
        wprintf(L"%d é um número par", n);
    } else {
        wprintf(L"%d é um número impar", n);
    } */
   getch();
}
