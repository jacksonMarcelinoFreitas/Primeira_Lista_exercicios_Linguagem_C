#include <stdio.h>

//Fa�a um Programa que pe�a um n�mero inteiro e determine se ele � par ou impar. Dica: utilize o operador m�dulo (resto da divis�o).


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
