/*
Fundamentos da Programação de Computadores
Capitulo 1 - Estrutura Sequencial
*/

#include <stdio.h>

int main()
{

    int numero;
    scanf("%d", &numero);

    printf("%d x %d = %d \t %d x %d = %d\n", numero, 0, numero * 0, numero, 5, numero * 5);
    printf("%d x %d = %d \t %d x %d = %d\n", numero, 1, numero * 1, numero, 6, numero * 6);
    printf("%d x %d = %d \t %d x %d = %d\n", numero, 2, numero * 2, numero, 7, numero * 7);
    printf("%d x %d = %d \t %d x %d = %d\n", numero, 3, numero * 3, numero, 8, numero * 8);
    printf("%d x %d = %d \t %d x %d = %d\n", numero, 4, numero * 4, numero, 9, numero * 9);
    printf("%d x %d = %d \t %d x %d = %d\n", numero, 5, numero * 5, numero, 10, numero * 10);

    return 0;
}