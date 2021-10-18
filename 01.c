#include <stdio.h>

/*Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero
de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no
referido m�s, sabendo-se que s�o descontados 11% para o Imposto de
Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos
d�:
a. sal�rio bruto.
b. quanto pagou ao INSS.
c. quanto pagou ao sindicato.
d. o sal�rio l�quido.
e. calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:*/

int main() {
	
	float ganhoHora, horas, salario, impRenda, inss, sind, liquido;
	
	printf(" Informe o quanto voce ganha por hora: ");
	scanf("%f", &ganhoHora);
	
	printf("\n\nInforme quantas horas voce trabalhou no mes:");
	scanf("%f", &horas);
	
	salario= ganhoHora*horas;
	printf("\n\nO seu salario bruto eh R$ %.2f ", salario);
	
	impRenda= salario*0.11;
	inss= salario*0.08;
	sind= salario*0.05;
	liquido = salario - (impRenda - inss - sind);
	
	printf("\nVoce pagou R$ %.2f de INSS", inss);
	printf("\nVoce pagou R$ %.2f de Imposto de Renda", impRenda);
	printf("\nVoce pagou R$ %.2f de Sindicato", sind);
	printf("\nO seu salario liquido eh: %.2f", liquido);

	return 0;
}
