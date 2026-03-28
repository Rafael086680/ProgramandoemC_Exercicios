/*
9) Faça um programa que implemente uma calculadora simples. O programa deve solicitar dois valores e, em seguida, 
apresentar o menu abaixo para o usuário escolher a operação desejada: 
[1] Adição 
[2] Subtração 
[3] Multiplicação 
[4] Divisão 
[5] Fim 
O programa deve exibir o resultado da operação escolhida. Caso o usuário escolha divisão, 
deve verificar se o segundo valor é diferente de zero. 
Caso a opção informada seja inválida, o programa deve exibir uma mensagem de erro. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;
    int opcao;

    // Entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    fflush(stdin);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    fflush(stdin);
    
    // Menu
    printf("\nEscolha a operacao:\n");
    printf("[1] Adicao\n");
    printf("[2] Subtracao\n");
    printf("[3] Multiplicacao\n");
    printf("[4] Divisao\n");
    printf("[5] Fim\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    fflush(stdin);

    // Processamento
    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero nao permitida!\n");
            }
            break;

        case 5:
            printf("Encerrando o programa...\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}