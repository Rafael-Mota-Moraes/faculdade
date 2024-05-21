#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem
decrescente.
*/

int main()
{
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        printf("%d ", i);
    }

    return 0;
}