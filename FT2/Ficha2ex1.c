// Opera��es b�sicas

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int num1, num2, soma, sub, mult;
float div;

main() {
    setlocale(LC_ALL, "portuguese");
    printf("Insira dois n�meros: ");
    scanf("%d%d",&num1,&num2);
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / (float)num2;
    printf("A soma � %d\n", soma);
    printf("A subtra��o � %d\n", sub);
    printf("A multiplica��o � %d\n", mult);
    printf("A divis�o � %.2f\n", div);
    getch();
}
