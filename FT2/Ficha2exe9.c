// Operações com num

#include <stdio.h>
#include <conio.h>

int num;

main() {
    printf("Valor de num: ");
    scanf("%d", &num);
    printf("Valor inicial de num = %d\n", num);
    num += 5;   // +5
    printf("Somando 5 ao valor inicial temos num = %d\n", num);
    num -= 1;   // -1
    printf("Subtraindo 1 temos num = %d\n", num);
    num = num * 2;   // *2
    printf("Multiplicando por 2 temos num = %d\n", num);
    num = num / 7;   // /3
    printf("Dividindo por 7 temos num = %d", num);
    getch();
}
