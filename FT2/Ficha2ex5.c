// Preço por m²

#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <conio.h>

wchar_t quadrado = 0x00B2;   //simbolo do quadrado
float preco, area;

main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduza o preço do terreno: ");
    scanf("%f", &preco);
    printf("Introduza a área do terreno: ");
    scanf("%f", &area);
    printf("O preço por m%lc deste terreno é %.2f", quadrado, preco/area);
    getch();
}
