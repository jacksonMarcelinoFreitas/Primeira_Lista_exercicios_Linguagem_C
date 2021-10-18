#include <stdio.h>

/*4. Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
 Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00
  mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.*/

int main() {
	float salario, venda, comissao, ultrapassa, salarioTotal;
	printf(" Informe o valor do seu salario: R$ ");
	scanf("%f", &salario );
	system("cls");
	printf("Agora informe o valor das suas vendas neste mes: R$  ");
	scanf("%f", &venda);

	if(venda <= 1500){
		comissao =venda*0.03;
		salarioTotal = comissao + salario;
		printf("O seu salario total eh  %f ", salarioTotal);
	}
	else if(venda > 1500){
		comissao=venda*0.05;
		salarioTotal = comissao + salario;
		printf("O seu salario total eh : R$ %.2f ", salarioTotal);
	}
	return 0;
}
