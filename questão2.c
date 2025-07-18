#include <stdio.h>

int main() {
    int num1, num2;
    
   
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

   
    printf("\nResultados:\n");
    printf("Soma       = %d\n", num1 + num2);
    printf("Produto    = %d\n", num1 * num2);
    printf("Diferenca  = %d\n", num1 - num2);

    if (num2 != 0) {
        printf("Quociente  = %d\n", num1 / num2);
        printf("Resto      = %d\n", num1 % num2);
    } else {
        printf("Quociente  = indefinido (divisão por zero)\n");
        printf("Resto      = indefinido (divisão por zero)\n");
    }

    return 0;
}
