
#include <stdio.h>

//Faça um programa que leia 5 números e informe o maior número.


int main() {
	
	int i, maior, num;
	for(i=1; i<=10; i++){
		printf("Digite o %d numero: ", i);
		scanf("%d", &num);
		if(i==1){
			maior=num;
		}
		else{
			if(num > maior){
				maior = num;
			}
		}
	}
printf(" %d eh o maior numero!", maior);
	
	return 0;
}
