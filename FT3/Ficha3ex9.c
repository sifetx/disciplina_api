// Tri�ngulos

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int l1, l2, l3;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Primeiro segmento do tri�ngulo: ");
    scanf("%d", &l1);
    printf("Segundo segmento do tri�ngulo: ");
    scanf("%d", &l2);
    printf("Terceiro segmento do tri�ngulo: ");
    scanf("%d", &l3);
    if (l1+l2>l3 && l2+l3>l1 && l1+l3>l2) {
        printf("Com os segmentos introduzidos � possivel criar um tri�ngulo ");
        if (l1 == l2 && l1 == l3 && l2 == l3) {
            printf("equil�tero\n");
        } else if (l1 != l2 && l1 != l3 && l2 != l3) {
            printf("escaleno\n");
        } else {
            printf("is�sceles\n");
        }
    } else {
        printf("Com os segmentos introduzidos n�o � possivel criar um tri�ngulo\n");
    }
    getch();
}
