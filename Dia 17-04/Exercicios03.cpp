/*
3. Construa um programa que leia dez números inteiros 
e determine qual é o maior e qual é o menor valor 
informado. Ao final, o programa deve calcular 
e mostrar a diferença entre o maior e o menor 
número do conjunto.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero, maior, menor;
	
	// entrada
	for(int i=1;i<=10;i++){
		printf("Digite %i numero: ",i);
		scanf("%i",&numero);
		fflush(stdin);
		if(i==1){
			menor=numero;
			maior=numero;
		}else{
			if(numero<menor){
				menor=numero;
			}
			if(numero>maior){
				maior=numero;
			}
		}
	}
	
	// processamento e saída
	printf("%i - %i = %i\n",maior,menor,maior-menor);
	
	return 0;
}




