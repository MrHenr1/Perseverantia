/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main(){

    float HorasTrabalhadas, ValSalarioMinimo, NumHoraExtraTrabalhadas, Salario;
    float HoraTrabalhada, HoraExtra;

    scanf("%f",&HorasTrabalhadas);
    scanf("%f",&ValSalarioMinimo);
    scanf("%f",&NumHoraExtraTrabalhadas);

    HoraTrabalhada = ValSalarioMinimo / 8;
    HoraExtra = ValSalarioMinimo / 4;
    Salario = (HorasTrabalhadas * HoraTrabalhada) + (NumHoraExtraTrabalhadas * HoraExtra);
    printf("R$ %.2f\n",Salario);

    return 0;
}