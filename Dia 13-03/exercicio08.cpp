#include <stdio.h>
#include <stdlib.h>

int main(void){
	 float n1, n2, r;
	 
	 printf("Digite o Primeiro numero: ");
	 scanf("%f",&n1);
	 fflush(stdin);
	 printf("Digite o Segundo numero: ");
	 scanf("%f",&n2);
	 fflush(stdin);
	 
	 r=n1+n2;
	 
	 printf("SOMA dos 2 numeros: %.f\n", r);
	 
	 return 0;
	 
}