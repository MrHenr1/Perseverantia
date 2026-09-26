/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    int horas, minutos, segundos;
    scanf("%d",&horas);
    scanf("%d",&minutos);
    
    printf("%d\n",horas*60);
    minutos+=(horas*60);
    printf("%d\n",minutos);
    segundos = minutos * 60;
    printf("%d\n",segundos);


    return 0;
}