// Valores por ordem crescente

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n1, n2;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduz o primeiro número: ");
    scanf("%d", &n1);
    printf("Introduz o segundo número: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("O primeiro número é maior que o segundo\n");
        printf("%d »» %d\n", n1, n2);
    } else if (n1 < n2) {
        printf("O segundo número é maior que o primeiro\n");
        printf("%d »» %d\n", n2, n1);
    } else {
        printf("Os dois números são iguais\n");
    }
    getch();
}
