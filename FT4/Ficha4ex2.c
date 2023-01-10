// Números em inglês

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita um número de 1 a 10: ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Introduz um valor válido!\n");
    } else {
        printf("%d em inglês lê-se: ", n);
        switch (n) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        case 10:
            printf("ten");
            break;
        }
        printf("\n");
    }
    getch();
}
