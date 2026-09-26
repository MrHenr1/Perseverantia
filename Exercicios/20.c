/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial

TRIGONOMETRIA:

Recebendo um Ângulo em um triângulo, para a gente calcular a medida da escada, precisamos correlacionar a distância da escada junto ao angulo 

Com isso:

Cos(a) = Ca/H
Porém, a gente não sabe o valor da hipotenusa e sim somente do angulo. Logo:

H*Cos(a) = Ca
H = Ca/Cos(a)

As funções trigonométricas em C são argumentos que são medidos em Radianos. Logo:
*/

#include <stdio.h>
#include <math.h>
#define pi 3.1415


int main(){

    float MedEscada, DistanciaEscada, alfa;
    scanf("%f",&alfa);
    scanf("%f",&DistanciaEscada);
    MedEscada = DistanciaEscada / cos((pi * alfa) / 180);
    printf("%.2f Metros\n",MedEscada);

    return 0;
}