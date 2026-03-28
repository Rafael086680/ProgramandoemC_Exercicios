#include <stdio.h>
#include <stdlib.h>

int main(void){
//Quais sao as variaveis?	
int raio, r;
int pi = 3.14;

//Quais sao as entradas de dados?
printf("Calcular a area do circulo\n");
printf("Digite o raio do circulo: ");
scanf("%i",&raio);
fflush(stdin);

//Qual é o processamento dos dados?
r=3.14*raio*raio;

//Quais são as saídas de dados?
printf("A area do circulo e: %f * %i * %i = %i\n",3.14,raio,raio, r);

	
	return 0;
}