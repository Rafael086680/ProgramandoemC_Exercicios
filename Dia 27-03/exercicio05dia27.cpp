/*
5) Faça um programa que leia a idade de quatro alunos, calcule a média das 
idades e apresente a mensagem correspondente:

"Turma Jovem", se a média for inferior a 25 anos;
"Turma Adulta", se a média estiver entre 25 e 40 anos;
"Turma Idosa", se a média for superior a 40 anos.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int i1,i2,i3,i4;
	float m;
	
	// entrada
	printf("Digite a 1 idade: ");
	scanf("%i",&i1);
	fflush(stdin);
	printf("Digite a 2 idade: ");
	scanf("%i",&i2);
	fflush(stdin);
	printf("Digite a 3 idade: ");
	scanf("%i",&i3);
	fflush(stdin);
	printf("Digite a 4 idade: ");
	scanf("%i",&i4);
	fflush(stdin);
	
	// processamento
	m=(float)(i1+i2+i3+i4)/4;
	
	// saída
	if(m<25){
		printf("Turma Jovem\n");
	}else if(m>=25 && m<40){
		printf("Turma Adulta\n");
	}else if(m>=40){
		printf("Turma Idosa\n");
	}
	
	return 0;
}