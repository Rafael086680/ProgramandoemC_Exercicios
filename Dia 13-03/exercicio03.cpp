#include <stdio.h>
#include <stdlib.h>

int main(void){
	//variaveis
	float C, F;
	
	//entradas
	printf("Qual a temperatura em graus Fahrenheit?\n");
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f",&F);
	fflush(stdin);
	
	//processamento
	C=5*(F-32)/9;
	
	//saida
	printf("Resultado: %.1f\n",C);
	
	return 0;

}