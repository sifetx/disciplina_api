// Escrever o nome e data de nascimento de uma pessoa

#include <stdio.h>
#include <locale.h>
#include <conio.h>

char nome[16];
int idade;
int ano_atual = 2022;

main() {
    setlocale(LC_ALL, "portuguese");
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Idade: ");
    scanf("%d", &idade);
    if (idade < 0 || idade > ano_atual) {
        wprintf(L"\033[31mIdade inválida!\033[0m");
    } else {
        printf("Nome:\033[33m %s\033[0m\nIdade:\033[33m %d\n\033[0mAno de nascimento:\033[33m %d\033[0m", nome, idade, ano_atual-idade);
    }
    getch();
}
