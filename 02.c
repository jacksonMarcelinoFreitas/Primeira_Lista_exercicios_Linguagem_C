#include <stdio.h>

/*Faça um programa para uma loja de tintas. O programa deverá pedir o
tamanho em metros quadrados da área a ser pintada. Considere que a
cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta
é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário
a quantidades de latas de tinta a serem compradas e o preço total.*/


int main() {
	int coberturaPorLata = 54, coberturaCliente, valorLata=80;
	 
	printf("Insira a metragem quadrada da area a ser pintada: " );
	scanf("%d", &coberturaCliente);
	
	if(coberturaCliente <= coberturaPorLata){
		printf(" Voce precisa somente de uma lata de tinta!");
		printf("O valor da lata eh: R$ %d ", valorLata);
	}
	else if(coberturaCliente > coberturaPorLata && coberturaCliente <= coberturaPorLata*2){
		printf("Voce  precisa de duas latas!");
		printf("O valor das latas eh: R$ %d ", valorLata*2);
	}
	else{
		printf("Voce precisa de 3 latas!");
		printf("O valor das latas eh: R$ %d", valorLata*3);
	}
	return 0;
}
