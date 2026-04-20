/*
6. Construa um programa que calcule o valor total 
investido na compra de CDs e também o custo médio 
por unidade. O usuário deverá informar a quantidade 
de CDs adquiridos e, em seguida, o valor pago por 
cada um deles.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int qtd_cds;
	float valor_cd, total_cds = 0;
	
	// entrada
	printf("Digite a quantidade de cds: ");
	scanf("%i",&qtd_cds);
	fflush(stdin);
	for(int i=1;i<=qtd_cds;i++){
		printf("Digite o valor do %i cd: ",i);
		scanf("%f",&valor_cd);
		fflush(stdin);
		total_cds+=valor_cd;
	}
	
	// processamento e saída
	printf("Valor media dos cds R$ %.2f\n",total_cds/qtd_cds);
	printf("O valor total da compra e R$ %.2f\n",total_cds);
	
	return 0;
}