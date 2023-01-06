// Pontuação no teste de datilografia

// Pontuação = [Número de palavras – (10*Número de erros)]/5

#include <stdio.h>
#include <conio.h>
#include <windows.h>

char nome[16];
int erros, palavras;
float pontuacao;

int main() {
    SetConsoleOutputCP(65001);
    printf("Nome do candidato: ");
    scanf("%s", &nome);
    printf("Número de palavras: ");
    scanf("%d", &palavras);
    printf("Número de erros: ");
    scanf("%d", &erros);
    pontuacao = (((float)palavras-(10*(float)erros))/5);
    printf("A pontuação de %s foi de %.1f\n", nome, pontuacao);
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
