/*
10. Construa um programa que solicite dois números inteiros, sendo eles a base e o expoente,
e calcule o valor da potência correspondente. Ao final, o programa deverá mostrar o resultado
do primeiro número elevado ao segundo.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int n1, n2;
    int resultado = 1;
    
    printf("Digite a base: ");
    scanf("%i", &n1);
    fflush(stdin);
    
    printf("Digite o expoente: ");
    scanf("%i", &n2);
    fflush(stdin);
    
    // Calcula a potência manualmente com um loop
    for (int i = 0; i < n2; i++) {
        resultado *= n1;
    }
    
    printf("\n%d elevado a %d = %d\n", n1, n2, resultado);
    
    return 0;
}
