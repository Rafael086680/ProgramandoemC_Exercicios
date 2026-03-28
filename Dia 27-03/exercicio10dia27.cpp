/*  
10) Faça um programa que leia um número inteiro de 1 a 4 e exiba a operação correspondente: 
1 – Soma 
2 – Subtração 
3 – Multiplicação 
4 – Divisão 
Após exibir o nome da operação, o programa deve informar uma breve descrição, por exemplo: 
"Soma: operação de adição entre dois valores". 
Caso o usuário digite um valor diferente, o programa deve exibir "Opção inválida". 
R.: 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    printf("Digite um numero de 1 a 4: ");
    scanf("%d", &opcao);
    fflush(stdin);

    switch(opcao) {
        case 1:
            printf("Soma\n");
            printf("Operacao de adicao entre dois valores.\n");
            break;

        case 2:
            printf("Subtracao\n");
            printf("Operacao de diferenca entre dois valores.\n");
            break;

        case 3:
            printf("Multiplicacao\n");
            printf("Operacao de produto entre dois valores.\n");
            break;

        case 4:
            printf("Divisao\n");
            printf("Operacao de divisao entre dois valores.\n");
            break;

        default:
            printf("Opcao invalida\n");
    }
    
    return 0;
}
