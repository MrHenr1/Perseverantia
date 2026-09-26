/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float salario, conta1, conta2, restante;

    scanf("%f",&salario);
    scanf("%f",&conta1);
    scanf("%f",&conta2);

    restante = salario - (conta1 * 1.02 + conta2 * 1.02);
    printf("%.2f\n",restante);

    return 0;
}