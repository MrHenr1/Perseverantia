#include <stdio.h>

int main(){

    float n1, n2, media;
    scanf("%f",&n1);
    scanf("%f",&n2);
    media = (n1 + n2) / 2;

    printf("%.2f\n",media);

    if (media >= 7.0)
        printf("Aprovado.\n");
    else{
        if(media >= 3.0)
            printf("Exame.\n");
        else
            printf("Reprovado.\n");
    }

    return 0;
}