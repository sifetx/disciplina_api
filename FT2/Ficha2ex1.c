// Operações básicas

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int num1, num2, soma, sub, mult;
float div;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Insira dois números: ");
    scanf("%d%d",&num1,&num2);
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / (float)num2;
    wprintf(L"A soma é %d\n", soma);
    wprintf(L"A subtração é %d\n", sub);
    wprintf(L"A multiplicação é %d\n", mult);
    wprintf(L"A divisão é %.2f\n", div);
    getch();
}
