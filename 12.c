#include <stdio.h>

//Altere o programa anterior para mostrar no final a soma dos n�meros.

int main() {
	
	int num1, num2, i, soma=0;
	printf("Informe um numero :");
	scanf("%d", & num1);
	printf("\nInforme outro numero :");
	scanf("%d", & num2);
	
	for(i = num1+1; i < num2; i++){
		printf("%d\n", i);
		soma+=i;
	}
	
	printf(" A soma dos numeros eh: %d", soma);
	return 0;
}
