#include <stdio.h>

int main(){

    float preco, novopreco;
    scanf("%f",&preco);
    novopreco = preco * 0.9;
    printf("%.2f\n",novopreco);

    return 0;
}