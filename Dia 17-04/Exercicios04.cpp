/*
4. Construa um programa que calcule e mostre a média 
bimestral de uma turma. O usuário deverá informar a 
quantidade de notas que serão consideradas e, 
em seguida, digitar cada uma delas. Ao final, 
o programa deverá apresentar a média calculada.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int qtd_alunos;
	float soma_notas = 0, media, notas;
	
	// entrada
	printf("Digite a quantidade de alunos: ");
	scanf("%i",&qtd_alunos);
	fflush(stdin);
	
	for(int i=1;i<=qtd_alunos;i++){
		printf("Digite %i nota: ",i);
		scanf("%f",&notas);
		fflush(stdin);
		soma_notas+=notas;
	}
	
	// processamento
	media=soma_notas/qtd_alunos;
	
	// saída
	printf("A media da turma e %.1f\n",media);
	
	return 0;
}