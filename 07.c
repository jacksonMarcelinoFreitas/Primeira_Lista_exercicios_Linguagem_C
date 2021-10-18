#include <stdio.h>

//Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o operador módulo (resto da divisão).


int main() {
	
	int numero;
	
	printf(" Informe um numero inteiro : ");
	scanf("%d", &numero);
	
	if(numero%2 == 1){
		printf(" O numero e impar ");	
	}
	else{
		printf(" O numero e par ");	
	}
	return 0;
}
