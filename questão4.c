#include <stdio.h>


int main(){
	
	int num1, num2, soma, sub, multi, divi, res;
	
	printf("Informe o primeiro numero inteiro: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero inteiro: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	divi = num1 / num2;
	res = num1 % num2;
	
	printf("Numero 1 \t Numero 2 \t Operacao \n");
    printf("%d \t \t %d \t \t numero1 + numeo2 = %d \n", num1, num2, soma);
    printf("%d \t \t %d \t \t numero1 - numeo2 = %d \n", num1, num2, sub);
    printf("%d \t \t %d \t \t numero1 * numeo2 = %d \n", num1, num2, multi);
    printf("%d \t \t %d \t \t numero1 / numeo2 = %d \n", num1, num2, divi);
    printf("%d \t \t %d \t \t numero1 %% numeo2 = %d \n", num1, num2, res
    );


   
	return 0;
}
