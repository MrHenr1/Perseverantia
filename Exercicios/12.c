/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float salariominimo, salariofuncionario;
    int quantidade;

    scanf("%f",&salariominimo);
    scanf("%f",&salariofuncionario);
    quantidade = salariofuncionario / salariominimo;
    printf("%d\n",quantidade);

    return 0;
}