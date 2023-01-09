// Mais velho

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char nome1[16], nome2[16];
int idade1, idade2;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Nome da primeira pessoa: ");
    scanf("%s", &nome1);
    printf("Idade da primeira pessoa: ");
    scanf("%d", &idade1);
    printf("Nome da segunda pessoa: ");
    scanf("%s", &nome2);
    printf("Idade da segunda pessoa: ");
    scanf("%d", &idade2);
    if (idade1 > idade2) {
        printf("%s é mais velho(a) que %s por %d anos\n", nome1, nome2, (idade1-idade2));
    } else if (idade1 < idade2) {
        printf("%s é mais velho(a) que %s por %d anos\n", nome2, nome1, (idade2-idade1));
    } else {
        printf("Os dois tem as mesmas idades\n");
    }
    getch();
}
