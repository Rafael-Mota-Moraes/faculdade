#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 10 inteiros positivos, ignorando
não positivos, e imprima sua média.
*/

int main()
{
    int i = 0, num, soma;

    while (i < 10)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num >= 0)
        {
            soma += num;
            i++;
        }
    }

    int media = soma / 10;

    printf("Media dos numeros: %d\n", media);
    return 0;
}