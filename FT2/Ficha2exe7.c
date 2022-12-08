// Determinar o quadrado e a raiz quadrada

#include <stdio.h>
#include <math.h>
#include <locale.h>

int n;

main() {
    setlocale(LC_ALL, "portuguese");
    wprintf(L"Número: ");
    scanf("%d", &n);
    wprintf(L"O \033[36mquadrado\033[0m de \033[33m%d\033[0m é \033[33m%.0f\033[0m"
            "\nA \033[36mraiz quadrada\033[0m de \033[33m%d\033[0m é \033[33m%.2f\033[0m", n, pow(n,2), n, sqrt(n));
}
