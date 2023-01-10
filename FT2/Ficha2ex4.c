// Nome e apelido

#include <stdio.h>
#include <conio.h>

char nome[16], apelido[16];

main() {
    printf("Digita o teu nome e apelido: ");
    scanf("%s%s", &nome, &apelido);
    printf("%s %s", apelido, nome);
    getch();
}
