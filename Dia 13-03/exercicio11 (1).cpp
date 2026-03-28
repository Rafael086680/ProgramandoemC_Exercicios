#include <stdio.h>
#include <stdlib.h>

int main(void){
	 float days, desconto, r1, r2, r3;
	 
	 printf("Digite: \n");
	 printf("Dias Trabalhados: ");
	 scanf("%f",&days);
	 fflush(stdin);
	 
	 r1=250*days;
	 r2=r1*0.08;
	 r3=r1-r2;
	 
	 printf("Pagamento com 8 porcento de desconto do IR: %.2f reais\n", r3);
	 
	 return 0;
	 
}