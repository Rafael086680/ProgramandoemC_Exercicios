/*
7. Construa um programa que gere a tabuada de 1 a 10 de 
qualquer número informado pelo usuário. Ao final, o 
programa deverá exibir todos os resultados 
correspondentes à multiplicação desse número pelos 
valores de 1 até 10.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	char op;
	
	// entrada
	do{
		system("cls");
		printf("Digite um numero: ");
		scanf("%i",&numero);
		fflush(stdin);
		
		// processamento e saída
		for(int i=1;i<=10;i++){
			printf("%i x %i = %i\n",numero, i, i*numero);
		}
		printf("\nDeseja outra tabuada (s/n): ");
		scanf("%c",&op);
		fflush(stdin);

	}while(op == 's' || op =='S');
	
	return 0;
}



