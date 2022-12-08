// Fahrenheit para Centígrados

#include <stdio.h>
#include <locale.h>

float fahr, cels;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Temperatura em fahrenheit: ");
    scanf("%f", &fahr);
    cels = (fahr-32)/1.8;   //C = 5/9 (F-32)
    wprintf(L"\033[33m%.1fº\033[0m fahrenheit são \033[33m%.1fº\033[0m centígrados", fahr, cels);
}
