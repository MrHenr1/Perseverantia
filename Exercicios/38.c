#include <stdio.h>

int main(){

    float PrecoProduto;

    scanf("%f",&PrecoProduto);

    if(PrecoProduto <= 50.00)
        PrecoProduto *= 1.05;
    else{
        if(PrecoProduto > 50.00 && PrecoProduto <= 100.00)
            PrecoProduto *= 1.10;
        else
            PrecoProduto *= 1.15;
    }

    printf("%.2f | ",PrecoProduto);

    if(PrecoProduto <= 80.00)
        printf("Barato.\n");
    else{
        if(PrecoProduto > 80.00 && PrecoProduto <= 120.00)
            printf("Normal.\n");
        else{
            if(PrecoProduto > 120.00 && PrecoProduto <= 200.00)
                printf("Caro.\n");
            else
                printf("Muito Caro.\n");
        }
    }

    return 0;
}