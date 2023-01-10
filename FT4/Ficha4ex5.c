// Calculadora

#include <stdio.h>
#include <conio.h>
#include <locale.h>

float num1, num2;
char op;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Digite uma expressão no formato: num op num: ");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op) {
        case '+':
            printf(" = %f", num1 + num2);
            break;
        case '-':
            printf(" = %f", num1 - num2);
            break;
        case '*':
            printf(" = %f", num1 * num2);
            break;
        case '/':
            printf(" = %f", num1 / num2);
            break;
        default:
            printf("Operador inválido!");
    }
    printf("\n");
    getch();
}
