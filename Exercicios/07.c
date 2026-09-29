#include <stdio.h>

int main(){

    float peso, novopeso;
    scanf("%f",&peso);
    novopeso = peso * 1.15;
    printf("%.3f\n",novopeso);
    novopeso = peso * 0.80;
    printf("%.3f\n",novopeso);

    return 0;
}