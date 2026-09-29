#include <stdio.h>

int main(){

    float Salario;

    scanf("%f",&Salario);

    if(Salario <= 300.00)
        Salario = Salario * 1.15;
    else{
        if(Salario > 300.00 && Salario < 600.00)
            Salario = Salario * 1.10;
        else{
            if(Salario >= 600.00 && Salario <= 900.00)
                Salario = Salario * 1.05;
            else
                printf("Nao teve reajuste.\n");
        }
    }

    printf("R$ %.2f",Salario);

    return 0;
}