// Determinar o quadrado e a raiz quadrada

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int n;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Número: ");
    scanf("%d", &n);
    wprintf(L"O quadrado de %d é %.0f"
            "\nA raiz quadrada de %d é %.2f", n, pow(n,2), n, sqrt(n));
    getch();
}
