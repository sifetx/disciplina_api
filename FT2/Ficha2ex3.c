// �rea das faces de um cubo

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <wchar.h>
#include <conio.h>

float aresta;
wchar_t cubo = 0x00B3;   //simbolo do cubo

main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita a medida das arestas do cubo (cm): ");
    scanf("%f", &aresta);
    printf("A �rea das faces desse cubo �: %.2fcm%lc", (pow(aresta,2)*6), cubo);
    getch();
}
