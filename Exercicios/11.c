/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float area, diagmaior, diagmenor;
    scanf("%f",&diagmaior);
    scanf("%f",&diagmenor);
    area = (diagmaior * diagmenor) / 2;
    printf("%.2f",area);

    return 0;
}