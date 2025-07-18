#include <stdio.h>

int main() {
    int a, b; // a = IVA, b = IRS
    int liq;

    printf("Digite o valor do IVA (%%): ");
    scanf("%d", &a);

    printf("Digite o valor do IRS (%%): ");
    scanf("%d", &b);

    liq = 100 - (a + b);

    printf("\n");
    printf("total = 100%%\n");
    printf("iva   = %d%%\n", a);
    printf("irs   = %d%%\n", b);
    printf("liq   = %d%%\n", liq);

    return 0;
}
