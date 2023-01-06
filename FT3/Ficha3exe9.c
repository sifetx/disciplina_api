// Triângulos

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int l1, l2, l3;

int main() {
    SetConsoleOutputCP(65001);
    printf("Primeiro segmento do triângulo: ");
    scanf("%d", &l1);
    printf("Segundo segmento do triângulo: ");
    scanf("%d", &l2);
    printf("Terceiro segmento do triângulo: ");
    scanf("%d", &l3);
    if (l1+l2>l3 && l2+l3>l1 && l1+l3>l2) {
        printf("Com os segmentos introduzidos é possivel criar um triângulo ");
        if (l1 == l2 && l1 == l3 && l2 == l3) {
            printf("equilátero\n");
        } else if (l1 != l2 && l1 != l3 && l2 != l3) {
            printf("escaleno\n");
        } else {
            printf("isósceles\n");
        }
    } else {
        printf("Com os segmentos introduzidos não é possivel criar um triângulo\n");
    }
    getch();
}
