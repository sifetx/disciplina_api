// Pontua��o no teste de datilografia

// Pontua��o = [N�mero de palavras - (10*N�mero de erros)]/5

#include <stdio.h>
#include <conio.h>
#include <locale.h>

char nome[16];
int erros, palavras;
float pontuacao;

int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Nome do candidato: ");
    scanf("%s", &nome);
    printf("N�mero de palavras: ");
    scanf("%d", &palavras);
    printf("N�mero de erros: ");
    scanf("%d", &erros);
    pontuacao = (((float)palavras-(10*(float)erros))/5);
    printf("A pontua��o de %s foi de %.1f\n", nome, pontuacao);
    printf("Resultado do teste: ");
    if (pontuacao > 52) {
        printf("Aprovado\n");
    } else if (pontuacao > 46) {
        printf("Tem de fazer novo teste\n");
    } else {
        printf("Reprovado\n");
    }
    getch();
}
