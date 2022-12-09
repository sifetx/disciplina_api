// Área das faces de um cubo

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <wchar.h>
#include <conio.h>

float aresta;
wchar_t cubo = 0x00B3;   //simbolo do cubo

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Digita a medida das arestas do cubo (cm): ");
    scanf("%f", &aresta);
    wprintf(L"A área das faces desse cubo é: \033[33m%.2fcm%lc\033[0m", (pow(aresta,2)*6), cubo);
    getch();
}
