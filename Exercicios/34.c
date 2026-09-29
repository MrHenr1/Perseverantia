#include <stdio.h>

int main()
{

    float SaldoM, Credito;

    scanf("%f", &SaldoM);

    if (SaldoM > 400.00)
        Credito = SaldoM * 0.30;
    else
    {
        if (SaldoM > 300.00 && SaldoM <= 400.00)
            Credito = SaldoM * 0.25;
        else
        {
            if (SaldoM > 200.00 && SaldoM <= 300.00)
                Credito = SaldoM * 0.20;
            else
                Credito = SaldoM * 0.10;
        }
    }
    printf("Saldo Medio: %.2f | Credito: %.2f\n",SaldoM,Credito);

    return 0;
}