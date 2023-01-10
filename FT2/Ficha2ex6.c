// Fahrenheit para Centí­grados

#include <stdio.h>
#include <locale.h>
#include <conio.h>

float fahr, cels;

main() {
    setlocale(LC_ALL, "portuguese");
    printf("Temperatura em fahrenheit: ");
    scanf("%f", &fahr);
    cels = (fahr-32)/1.8;   //C = 5/9 (F-32)
    printf("%.1fº fahrenheit são %.1fº centígrados", fahr, cels);
    getch();
}
