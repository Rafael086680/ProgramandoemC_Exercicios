#include <stdio.h>
#include <stdlib.h>

int main(void){
	 int m, c;
	 
	 printf("Converter de metros para centimetros\n");
	 printf("Digite o valor em metros: ");
	 scanf("%i",&m);
	 fflush(stdin);
	 
	 c=(m*100);
	 
	 printf("Em centimetros: %.i\n", c);
	 
	 return 0;
	 
}