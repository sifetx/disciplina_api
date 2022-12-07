// Converter minutos em horas

#include <stdio.h>

int minutos, horas, resto;

main() {
    printf("Introduza o valor em minutos: ");
    scanf("%d", &minutos);
    horas = minutos / 60;
    resto = minutos % 60;
    printf("%d minutos = %d horas e %d minutos", minutos, horas, resto);
}
