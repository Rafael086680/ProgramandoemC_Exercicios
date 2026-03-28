#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float ir, inss, sindicato, sl, sb, descontos;
	 
	 printf("Calculo de valores \n");
	 printf("Salario Bruto: ");
	 scanf("%f",&sb);
	 fflush(stdin);

	 ir=sb*0.15;
	 inss=sb*0.11;
	 sindicato=sb*0.03;
	 descontos=ir+inss+sindicato;
	 sl=sb-descontos;
	 
	 
	printf("Imposto de Renda: %.2f\n", ir);
	 printf("INSS: %.2f\n", inss);
	 printf("Sindicato: %.2f\n", sindicato);
	 printf("Salario Liquido: %.2f reais\n", sl);
	 
	 return 0;
	 
}