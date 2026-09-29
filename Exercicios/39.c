#include <stdio.h>

int main(){

    float SalarioFuncionario;

    scanf("%f",&SalarioFuncionario);

    if(SalarioFuncionario <= 300.00)
        SalarioFuncionario *= 1.50;
    else{
        if(SalarioFuncionario <= 500.00)
            SalarioFuncionario *= 1.40;
        else{
            if(SalarioFuncionario <= 700.00)
                SalarioFuncionario *= 1.30;
            else{
                if(SalarioFuncionario <= 800.00)
                    SalarioFuncionario *= 1.20;
                else{
                    if(SalarioFuncionario <= 1000.00)
                        SalarioFuncionario *= 1.10;
                    else
                        SalarioFuncionario *= 1.05;
                }
            }
        }
    }

    printf("R$ %.2f\n",SalarioFuncionario);

    return 0;
}