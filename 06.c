#include <stdio.h>
//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

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
