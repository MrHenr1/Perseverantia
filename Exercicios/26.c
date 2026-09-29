#include <stdio.h>

int main(){

    float n1, n2, n3, n4, media;
    
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("%.2f\n",media);

    if(media >= 7)
        printf("Aprovado!\n");
    else
        printf("Reprovado!\n");

    return 0;
}