#include <stdio.h>

//Fa�a um programa que receba dois n�meros inteiros e gere os n�meros inteiros que est�o no intervalo compreendido por eles.

int exercio11(){
	
	int num1, num2, i, cont, aux;
	
	printf("\nInforme o primeiro numero :");
	scanf("%d", &num1);
	printf("\nInforme o segundo numero :");
	scanf("%d", &num2);
	
	if(num1 > num2){
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	printf("_______________Com For____________________");
	for(i = num1+1; i < num2; i++){
		printf("%d\n", i);
	}
	
	printf("__________Decrescente________________________________\n");
	
	for(i = num2-1; i > num1; i--){
		printf("%d\n", i);
	}
	
	printf("__________Com While_______________________\n");
	
	while( num1 < num2){
		printf("%d\n", num1);
		num1+=1;
	}
	
	return 0;
}
