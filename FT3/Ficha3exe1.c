// Número par ou impar

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Introduz um n�mero inteiro: ");
    scanf("%d", &n);

    // Operador tern�rio
    (n % 2 == 0) ? printf("%d � um n�mero par\n", n): printf("%d � um n�mero impar\n", n); 

    /* Estrutura condicional normal
    if(n % 2 == 0) {
        printf("%d � um n�mero par", n);
    } else {
        printf("%d � um n�mero impar", n);
    } */
   getch();
}
