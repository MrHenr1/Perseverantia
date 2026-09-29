#include <stdio.h>

int main(){

    float Valor;
    int TipoInveste;
    
    scanf("%d",&TipoInveste);
    scanf("%f",&Valor);

    switch(TipoInveste){
        case 1:
            Valor *= 1.03;
            break;
        case 2:
            Valor *= 1.04;
            break;
        default:
            printf("Tipo de Investimento Inválido.\n");
    }

    printf("R$ %.2f\n",Valor);

    return 0;
}