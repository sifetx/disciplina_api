// Valores por ordem crescente

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n1, n2;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduz o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Introduz o segundo n�mero: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("O primeiro n�mero � maior que o segundo\n");
        printf("%d �� %d\n", n1, n2);
    } else if (n1 < n2) {
        printf("O segundo n�mero � maior que o primeiro\n");
        printf("%d �� %d\n", n2, n1);
    } else {
        printf("Os dois n�meros s�o iguais\n");
    }
    getch();
}
