#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n1;
	float real,n2,r1,r2,r3;
	
	printf("Digite: \n");
	printf("O primeiro numero inteiro: ");
		scanf("%i",&n1);
	 fflush(stdin);
	printf("O segundo numero inteiro: ");
			scanf("%f",&n2);
	 fflush(stdin);
	printf("Um numero real: ");
		scanf("%f",&real);
	 fflush(stdin);
	
r1=n1*2+(n2/2);
printf("Resultado da LETRA A: %.1f\n",r1);

r2=(n1*3)+real;
printf("Resultado da LETRA B: %.1f\n", r2);

r3=(real*real);
printf("Resultado da LETRA C: %.1f\n", r3);


return 0;
}