#include <stdio.h>

//Fa�a um programa que leia 5 n�meros e informe a soma e a m�dia dos n�meros.

int main() {
	int num, i, soma=0, media;
	for( i=1; i<= 10; i++){
		printf("Informe %d� numero : ", i);
		scanf("%d", &num);
		soma+=num;
	}
	media = soma/10;
	printf(" A media eh %d", media);
	return 0;
}
