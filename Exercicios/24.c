/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float MarcoAlemao, Dolar, LibraEsterlina, Reais;

    scanf("%f",&Reais);
    MarcoAlemao = Reais / 2.00;
    Dolar = Reais / 1.80;
    LibraEsterlina = Reais / 3.57;

    printf("Dolar: %.2f\n",Dolar);
    printf("Marco Alemao: %.2f\n",MarcoAlemao);
    printf("Libra Esterlina: %.2f\n",LibraEsterlina);

    return 0;
}