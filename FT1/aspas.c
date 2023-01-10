#include <stdio.h>
#include <conio.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "portuguese");
    printf("/Hoje está um \"Lindo dia!!!\"\\");
    getch();
}
