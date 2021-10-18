#include <stdio.h>

//Faça um Programa que peça dois números e imprima o maior deles.

int main() {
	int num1, num2, maior;
	
	printf(" Informe o numero 1 e o numero 2 :\n");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2){
		printf(" O numero %d eh o maior ", num1);
	}
	else{
		printf(" O numero %d eh o maior ", num2);
	}
	return 0;
}
