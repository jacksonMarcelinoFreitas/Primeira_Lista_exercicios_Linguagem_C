#include <stdio.h>

//Faça um programa que leia 5 números e informe a soma e a média dos números.

int main() {
	int num, i, soma=0, media;
	for( i=1; i<= 10; i++){
		printf("Informe %d° numero : ", i);
		scanf("%d", &num);
		soma+=num;
	}
	media = soma/10;
	printf(" A media eh %d", media);
	return 0;
}
