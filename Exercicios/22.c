/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    int ND, N;
    scanf("%d",&N);
    ND = N * (N - 3) / 2;
    printf("%d\n",ND);

    return 0;
}