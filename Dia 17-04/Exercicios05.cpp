/*
5. Construa um programa que calcule a média de alunos 
por turma de uma escola. Para isso, o usuário deverá 
informar a quantidade de turmas existentes e, em 
seguida, a quantidade de alunos em cada turma. 
Considere que nenhuma turma pode possuir mais de 40 
alunos.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int qtd_alunos=0, qtd_turmas, alunos;
	float media_alunos;
	
	// entrada
	printf("Digite a quantidade de turmas: ");
	scanf("%i",&qtd_turmas);
	fflush(stdin);
	for(int i=1;i<=qtd_turmas;i++){
		printf("Dig a qtd de alunos na turma %i: ",i);
		scanf("%i",&alunos);
		if(alunos>=1 && alunos<=40){
			qtd_alunos+=alunos;
		}else{
			printf("Erro! Fora do int 1 ate 40.\n");
			i--;
		}
	}
	
	// processamento
	media_alunos = (float)qtd_alunos/qtd_turmas;
	
	// saída
	printf("A media e %.2f\n",media_alunos);
	
	return 0;
}