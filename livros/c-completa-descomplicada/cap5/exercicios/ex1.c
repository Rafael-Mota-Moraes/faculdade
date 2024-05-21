#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem
crescente.
*/

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}