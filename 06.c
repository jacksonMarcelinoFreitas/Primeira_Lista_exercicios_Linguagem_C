#include <stdio.h>
//Fa�a um Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo.

int main() {
	
	float valor;
	
	printf(" Informe um valor: ");
	scanf("%f", &valor);
	
	if(valor > 0){
		printf("Positivo");
	}
	else{
		printf("Negativo");
	}
	
	return 0;
}
