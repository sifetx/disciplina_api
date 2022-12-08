// Converter minutos em horas

#include <stdio.h>

int minutos, horas, resto;

main() {
    printf("Introduza o valor em minutos: ");
    scanf("%d", &minutos);
    horas = minutos / 60;
    resto = minutos % 60;
    printf("\033[36m%d minutos\033[0m = \033[33m%d horas\033[0m e \033[33m%d minutos\033[0m", minutos, horas, resto);
}
