// Determinar o quadrado e a raiz quadrada

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int n;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"N?mero: ");
    scanf("%d", &n);
    wprintf(L"O quadrado de %d ? %.0f"
            "\nA raiz quadrada de %d ? %.2f", n, pow(n,2), n, sqrt(n));
    getch();
}
