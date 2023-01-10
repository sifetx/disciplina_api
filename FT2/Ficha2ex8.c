// Escrever o nome e data de nascimento de uma pessoa

#include <stdio.h>
#include <locale.h>
#include <conio.h>

char nome[16];
int idade;
const int ano_atual = 2022;

main() {
    setlocale(LC_ALL, "portuguese");
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Idade: ");
    scanf("%d", &idade);
    if (idade < 0 || idade > ano_atual) {
        wprintf(L"Idade inválida!");
    } else {
        printf("Nome: %s\nIdade: %d\nAno de nascimento: %d\n", nome, idade, ano_atual-idade);
    }
    getch();
}
