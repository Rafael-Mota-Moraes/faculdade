#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 10 inteiros e imprima sua média.
*/

int main()
{
    int n, soma = 0, media = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma += n;
    }

    media = soma / 10;

    printf("Media dos numeros: %d\n", media);

    return 0;
}