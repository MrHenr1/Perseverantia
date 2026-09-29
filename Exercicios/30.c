#include <stdio.h>

int main(){

    float n1, n2, resultado;
    int escolha;

    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%d",&escolha);

    switch(escolha){
        case 1:
            resultado = (n1 + n2) / 2;
            break;
        case 2:
            if(n1 > n2)
                resultado = n1 - n2;
            else
                if(n1 < n2)
                    resultado = n2 - n1;
                else{
                    resultado = 0;
                    printf("Impossivel realizar essa conta.\n");
                }
            break;
        case 3:
                resultado = n1 * n2;
                break;
        case 4:
                if(n2 != 0)
                    resultado = n1 / n2;
                else{
                    resultado = 0;
                    printf("Impossivel realizar essa conta.\n");
                }
                break;
        default:
                printf("Opcao invalida.\n");
                resultado = 0;
    }

    printf("%.2f\n",resultado);

    return 0;
}