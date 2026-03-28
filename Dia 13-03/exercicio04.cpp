#include <stdio.h>
#include <stdlib.h>

int main(void){
	//variaveis
	float C, F;
	
	//entradas
	printf("Qual a temperatura em Celsius\n");
	printf("Digite a temperatura em Celsius: ");
	scanf("%f",&C);
	fflush(stdin);
	
	//processamento
	F=C*9/5+32;
	
	//saida
	printf("Resultado: %.1f\n",F);
	
	return 0;
}

