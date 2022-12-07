//Área das faces de um cubo

#include <stdio.h>
#include <math.h>
#include <locale.h>

float aresta;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Digita a medida das arestas do cubo (cm): ");
    scanf("%f", &aresta);
    wprintf(L"A área das faces desse cubo é: %.2fcm³", (pow(aresta,2)*6));
}
