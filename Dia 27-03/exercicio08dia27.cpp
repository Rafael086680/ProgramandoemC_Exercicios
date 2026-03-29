/*
8) Faça um programa que leia um número de 1 a 7 e exiba o dia correspondente da semana, conforme a tabela abaixo: 
1 - Domingo 
2 - Segunda-feira 
3 - Terça-feira 
4 - Quarta-feira 
5 - Quinta-feira 
6 - Sexta-feira 
7 - Sábado 
Caso seja digitado outro valor, o programa deve informar "Valor inválido". 
R.: 
*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Valor invalido\n");
    }

    return 0;
}
