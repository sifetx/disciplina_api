// Sal√°rio

#include <stdio.h>
#include <conio.h>
#include <locale.h>

float salario;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Ordenado: ");
    scanf("%f", &salario);

    if (salario < 0) {
        printf("O sal·rio n„o pode ser negativo!");
    } else if (salario < 706) {
        printf("Para esse sal·rio o aumento ser· de 20%%, logo, o sal·rio passar· a ser %.2f\n", salario*1.2);
    } else {
        printf("Para esse sal·rio o aumento ser· de 5%%, logo, o sal·rio passar· a ser %.2f\n", salario*1.05);
    }
    getch();
}
