#include <stdio.h>

int main(){

    float salario;
    scanf("%f",&salario);

    if(salario >= 500.00)
        printf("Salario nao reajustado.\n");
    else{
        salario = salario * 1.30;
        printf("Salario reajustado!\n");
        printf("R$ %.2f\n",salario);
    }
    return 0;
}