// Par ou impar, com operações

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int n, n2;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digita um número: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("O quadrado de %d é %.0f\n"
            "A raiz quadrada de %d é %.2f\n", n, pow(n,2), n, sqrt(n));
    } else {
        printf("Como esse número impar, escolhe outro: ");
        scanf("%d", &n2);
        printf("O quociente entre %d e %d é %d\n"
            "A multiplicação entre %d e %d é %d\n", n, n2, (n/n2), n, n2, (n*n2));
    }
    getch();
}
