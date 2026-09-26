/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    int dim1, dim2, mQ, potencia;
    scanf("%d",&dim1);
    scanf("%d",&dim2);
    mQ = (dim1 * dim2);
    potencia = mQ * 18;
    printf("Metros Quadrados: %d\nPotencia ideal: %d Wats\n",mQ,potencia);


    return 0;
}