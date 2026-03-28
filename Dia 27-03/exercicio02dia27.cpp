//Faça um programa que leia um número e informe se ele é positivo, negativo ou igual a zero. //

#include <studio.h>
#include <stdlib.h>

int main (void){
	
	int numero;
	
	printf("Digite o numero");
	scanf("%i",&numero);
	fflush(stidin);
	
	if(numero > 0){
		printf("O numero e positivo");
	}else{
		if(numero < 0){
			printf("O numero e negativo");
		}else(numeo = 0){
			printf("O numero e igual a zero");
		}
	}
	
	return 0;
}