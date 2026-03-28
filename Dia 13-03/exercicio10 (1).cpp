#include <stdio.h>
#include <stdlib.h>

int main(void){
	 float ph, hora, r;
	 
	 printf("Valor ganho por hora: ");
	 scanf("%f",&ph);
	 fflush(stdin);
	 printf("Horas trabalhadas no mes: ");
	 scanf("%f",&hora);
	 fflush(stdin);
	 
	 r=ph*hora;
	 
	 printf("Salario total do mes: %.2f\n", r);
	 
	 return 0;
	 
}