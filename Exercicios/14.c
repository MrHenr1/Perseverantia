/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    int anonascimento, anoatual;
    int anos, meses, dias;
    float semanas;

    scanf("%d",&anoatual);
    scanf("%d",&anonascimento);

    anos = anoatual - anonascimento;
    meses = anos * 12;
    semanas = meses * 4.345;
    dias = anos * 365 + 10;

    printf("\n");
    printf("%d anos\n",anos);
    printf("%d meses\n",meses);
    printf("%.2f semanas\n",semanas);
    printf("%d dias\n",dias);

    return 0;
}