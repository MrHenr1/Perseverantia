#include <stdio.h>

int main(){

    float salario;
    scanf("%f",&salario);

    if(salario >= 300.00)
        salario *= 1.15;
    else
        salario *= 1.15;
    printf("R$ %.2f",salario);

    return 0;
}