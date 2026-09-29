#include <stdio.h>

int main(){

    float PrecoAtual, Desconto;
    int Codigo;

    scanf("%f",&PrecoAtual);
    scanf("%d",&Codigo);

    if(PrecoAtual <= 30.00)
        Desconto = 0.00;
    else{
        if(PrecoAtual > 30.00 && PrecoAtual <= 100.00)
            Desconto = PrecoAtual * 0.10;
        else
            Desconto = PrecoAtual * 0.15;
    }

    PrecoAtual -= Desconto;

    printf("Desconto: R$ %.2f | Preco Novo: R$ %.2f\n",Desconto,PrecoAtual);
    return 0;
}