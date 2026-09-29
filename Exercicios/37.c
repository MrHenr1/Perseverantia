#include <stdio.h>

int main(){

    float SalarioBruto, SalarioLiquido;

    scanf("%f",&SalarioBruto);

    if(SalarioBruto <= 350.00)
        SalarioBruto += 100.00;
    else{
        if(SalarioBruto > 350.00 && SalarioBruto < 600.00)
            SalarioBruto += 75.00;
        else{
            if(SalarioBruto >= 600.00 && SalarioBruto <= 900.00)
                SalarioBruto += 50.00;
            else
                SalarioBruto += 35.00;
        } 
    }
    
    SalarioLiquido = SalarioBruto * 0.93;

    printf("Total a receber: R$ %.2f",SalarioLiquido);

    return 0;
}