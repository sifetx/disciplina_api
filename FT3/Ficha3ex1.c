// NÃºmero par ou impar

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduz um número inteiro: ");
    scanf("%d", &n);

    // Operador ternário
    (n % 2 == 0) ? printf("%d é um número par\n", n): printf("%d é um número impar\n", n); 

    /* Estrutura condicional normal
    if(n % 2 == 0) {
        printf("%d é um número par", n);
    } else {
        printf("%d é um número impar", n);
    } */
   getch();
}
