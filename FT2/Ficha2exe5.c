//Preço por m²

#include <stdio.h>
#include <locale.h>
#include <wchar.h>

wchar_t quadrado = 0x00B2;   //simbolooo do quadrado
float preco, area;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Introduza o preço por m%lc de terreno: ", quadrado);
    scanf("%f", &preco);
    wprintf(L"Introduza a área do terreno: ");
    scanf("%f", &area);
    wprintf(L"O preço por m%lc deste terreno é %.2f", quadrado, preco/area);
}
