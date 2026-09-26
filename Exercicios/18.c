/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float celsius, fahrenheit;
    scanf("%f",&celsius);
    fahrenheit = 180 * (celsius + 32) / 100;
    printf("%.2f\n",fahrenheit);

    return 0;
}