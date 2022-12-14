// Peso ideal

// - para o sexo masculino: peso ideal = (72,7 * altura) - 58
// - para o sexo feminino: peso ideal = (62,1 * altura) - 44,7

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char nome[16]; 
char sexo;
float altura;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Sexo [M/F]: ");
    scanf(" %c", &sexo);
    printf("Altura: ");
    scanf("%f", &altura);

    if ((sexo == 'm' || sexo == 'M') && (altura > 0)) {
        printf("O peso ideal de %s ? %.2f\n", nome, ((72.7*altura)-58));
    } else if ((sexo == 'f' || sexo == 'F') && (altura > 0)) {
        printf("O peso ideal de %s ? %.2f\n", nome, ((62.1*altura)-44.7));
    } else {
        printf("O sexo s? pode assumir o valor de M ou F (masculino e feminino, respetivamente)\n");
    }
    getch();
}
