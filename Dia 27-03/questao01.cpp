//Faça um programa que leia dois números e informe qual deles é o maior. Caso os dois números sejam iguais, o programa deve informar essa situação. //

// Exemplo01 -> Dado dois números qual é o maior?

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	int numero1, numero2;
	
	// Quais são as entrada de dados?
	printf("Digite 1 numero: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&numero2);
	fflush(stdin);
	
	// qual é o processamento e saída dados?
	if(numero1 > numero2){
		printf("O maior numero e %i\n",numero1);
	}else{
		if(numero1 < numero2){
			printf("O maior numero e %i\n",numero2);
		}else{
			printf("Os numeros sao iguais.\n");
		}
	}
	
	return 0;
}








