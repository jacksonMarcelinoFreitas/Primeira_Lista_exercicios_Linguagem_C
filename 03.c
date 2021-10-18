#include <stdio.h>

/*Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
• A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
• A mensagem "Reprovado", se a média for menor do que sete;*/


int main() {
	
	int nota1, nota2, mediaPadrao = 7, mediaAluno;
	
	printf(" Insira duas notas: \n");
	scanf("%d", &nota1);
	scanf("%d", &nota2 );
	mediaAluno = (nota1+nota2)/2;
	
	if(mediaAluno < mediaPadrao){
		printf("Aluno REPROVADO !");
	}
	
	else{
		printf("Aluno APROVADO ! ");
	}
	return 0;
}
