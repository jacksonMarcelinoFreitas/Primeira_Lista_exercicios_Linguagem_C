
#include <stdio.h>

//Fa�a um programa que leia 5 n�meros e informe o maior n�mero.


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
