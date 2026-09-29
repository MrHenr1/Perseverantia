#include <stdio.h>

int main(){

    int n1,n2;

    scanf("%d",&n1);
    scanf("%d",&n2);

    if(n1 > n2)
        printf("%d\n",n1);
    else
        if(n1 < n2)
            printf("%d\n",n2);
        else
            printf("Sao iguais.\n");

    return 0;
}