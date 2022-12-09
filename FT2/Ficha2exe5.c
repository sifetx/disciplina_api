// Preço por m²

#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <conio.h>

wchar_t quadrado = 0x00B2;   //simbolo do quadrado
float preco, area;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Introduza o preço do terreno: ");
    scanf("%f", &preco);
    wprintf(L"Introduza a área do terreno: ");
    scanf("%f", &area);
    wprintf(L"O preço por m%lc deste terreno é \033[33m%.2f\033[0m", quadrado, preco/area);
    getch();
}
