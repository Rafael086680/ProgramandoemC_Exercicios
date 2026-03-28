/*
4) Faça um programa que leia três notas de um aluno, calcule a média e 
apresente uma das mensagens a seguir:

"Aprovado", se a média for maior ou igual a 7;
"Reprovado", se a média for menor que 7;
"Aprovado com Distinção", se a média for igual a 10.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float n1, n2, n3, m;
	
	// entrada
	printf("Digite 1 nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Digite 2 nota: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Digite 3 nota: ");
	scanf("%f",&n3);
	fflush(stdin);
	
	// processamento
	m=(n1+n2+n3)/3;
	
	// saida
	if(m==10){
		printf("Aprovado com disticao, com media %.2f\n",m);
	}else if(m>=7){
		printf("Aprovado, com media %.2f\n",m);
	}else{
		printf("Repovado, com media %.2f\n",m);
	}
	
	return 0;
}