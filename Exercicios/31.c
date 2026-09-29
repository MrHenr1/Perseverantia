#include <stdio.h>
#include <math.h>

int main(){

    float n1, n2;
    int escolha;

    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%d",&escolha);

    switch(escolha){
        case 1:
            printf("%.2f\n",pow(n1,n2));
            break;
        case 2:
            printf("%.2f | %.2f\n",sqrt(n1),sqrt(n2));
            break;
        case 3:
            printf("%.2f | %.2f\n",cbrt(n1),cbrt(n2));
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}