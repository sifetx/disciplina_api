// Operações básicas

#include <stdio.h>
#include <locale.h>

int num1, num2, soma, sub, mult;
float div;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Insira dois números: ");
    scanf("%d%d",&num1,&num2);
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / (float)num2;
    wprintf(L"A \033[36msoma\033[0m é \033[33m%d\033[0m\n", soma);
    wprintf(L"A \033[36msubtração\033[0m é \033[33m%d\033[0m\n", sub);
    wprintf(L"A \033[36mmultiplicação\033[0m é \033[33m%d\033[0m\n", mult);
    wprintf(L"A \033[36mdivisão\033[0m é \033[33m%.2f\033[0m\n", div);
}
