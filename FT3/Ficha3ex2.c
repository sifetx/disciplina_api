// Salário

#include <stdio.h>
#include <conio.h>
#include <locale.h>

float salario;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Ordenado: ");
    scanf("%f", &salario);

    if (salario < 0) {
        printf("O salário não pode ser negativo!");
    } else if (salario < 706) {
        printf("Para esse salário o aumento será de 20%%, logo, o salário passará a ser %.2f\n", salario*1.2);
    } else {
        printf("Para esse salário o aumento será de 5%%, logo, o salário passará a ser %.2f\n", salario*1.05);
    }
    getch();
}
