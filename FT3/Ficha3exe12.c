// Par ou impar, com opera��es

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int n, n2;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita um n�mero: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("O quadrado de %d � %.0f\n"
            "A raiz quadrada de %d � %.2f\n", n, pow(n,2), n, sqrt(n));
    } else {
        printf("Como esse n�mero impar, escolhe outro: ");
        scanf("%d", &n2);
        printf("O quociente entre %d e %d � %d\n"
            "A multiplica��o entre %d e %d � %d\n", n, n2, (n/n2), n, n2, (n*n2));
    }
    getch();
}
