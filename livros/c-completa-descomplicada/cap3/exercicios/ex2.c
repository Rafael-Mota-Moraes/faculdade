#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número real e imprima a
quinta parte desse número.
*/
int main()
{
    int num, quinta_parte;

    printf("Digite um numero: ");
    scanf("%d", &num);

    quinta_parte = num / 5;
    printf("Quinta parte de %d eh %d\n", num, quinta_parte);

    return 0;
}