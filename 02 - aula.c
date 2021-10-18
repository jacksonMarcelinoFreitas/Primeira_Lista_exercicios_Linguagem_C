#include <iostream>
#include <stdio.h>
#include <math.h>

/*Fa�a um programa para uma loja de tintas. O programa dever� pedir o
tamanho em metros quadrados da �rea a ser pintada. Considere que a
cobertura da tinta � de 1 litro para cada 3 metros quadrados e que a tinta
� vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usu�rio
a quantidades de latas de tinta a serem compradas e o pre�o total.*/
//se x.50  adiciona uma lata a mais 18 l
//se x.50 a menos adiciona  uma lata de 10 l


//Diferen�a else if * if : depois de identificado com vdd, ele n�o roda as outras condi��es
//enquanto o if continua rodando as outras condi��es e executando.
//if usa-se na verifica��o de v�rias senten�as que podem ser vdd
//else if usa-se quando s� � vdd uma senten�a de c�digo
int main() {
	
	float metro2, quantLitros, quantLatas, precoTotal, verificar, partInt, partDec, continuar;
	
	do{
		printf(" Digite os metros quadrados da area a ser pintada: ");
		scanf("%f", &metro2);
		
		quantLitros = metro2/3; //d� a aquantidade de litros necess�rios
		
		quantLatas = quantLitros/18; //d� a quantidade de latas
		
		precoTotal = quantLatas*80; //d� o valor da compra
		
		partInt = (int)quantLatas; //para pegar o n�mero inteiro
		partDec = quantLatas - partInt; //pega s� o valor decimal 
		
		if(partDec >= 0.5){
			quantLatas = partInt + 1; //aqui acrescenta mais uma lata as outras
			quantLatas += 1;
			precoTotal = quantLatas * 80;	
		}
		
		else if(partDec < 0.5 && partDec != 0){
			quantLatas = partInt;
			precoTotal = (quantLatas * 80) + 50;
			printf(" Quantidade de latas de 10L: %f\n", quantLatas);	
		}
			
		printf(" Quantade de litros : %2.f\n", quantLitros);
		printf(" Quantade de latas de 18L: %2.f\n", quantLatas);
		printf(" Quantade de preco : R$ %2.f\n", precoTotal);
		
		printf("Deseja continuar ? 0-SIM  1-NAO \n\n");
		scanf("%i", &continuar );
		system("cls");
	}while(continuar == 0);
	
	printf("TCHAU!!!");
	
	return 0;
}
