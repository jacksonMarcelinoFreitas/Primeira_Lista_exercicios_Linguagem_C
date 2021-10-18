#include <stdio.h>

//Fa�a um programa que pe�a uma nota, entre zero e dez. Mostre uma mensagem caso o
// valor seja inv�lido e continue pedindo at� que o usu�rio informe um valor v�lido.

int main() {
	int nota;
	
	do{
		printf("Informe uma nota entre 0 e 10 : ");
		scanf("%d", &nota);
	}while(nota < 0 || nota > 10);
	
	return 0;
}
