// Pre�o por m�

#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <conio.h>

wchar_t quadrado = 0x00B2;   //simbolo do quadrado
float preco, area;

main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduza o pre�o do terreno: ");
    scanf("%f", &preco);
    printf("Introduza a �rea do terreno: ");
    scanf("%f", &area);
    printf("O pre�o por m%lc deste terreno � %.2f", quadrado, preco/area);
    getch();
}
