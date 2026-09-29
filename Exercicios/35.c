#include <stdio.h>

int main(){


    float PrecoFinal, Custo, PercDistribuidor, PercImpostos;

    scanf("%f",&Custo);

    if(Custo <= 12000){
        PercDistribuidor = Custo * 0.05;
        PercImpostos = 0;}
    else{
        if(Custo > 12000 && Custo <= 25000){
            PercDistribuidor = Custo * 0.10;
            PercImpostos = Custo * 0.15;}
        else{
            PercDistribuidor = Custo * 0.15;
            PercImpostos = Custo * 0.20;
        }
    }

    PrecoFinal = Custo + PercDistribuidor + PercImpostos;

    printf("Valor ao consumidor: R$ %.2f\n",PrecoFinal);

    return 0;
}