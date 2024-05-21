#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro N e depois
imprima os N primeiros números naturais ímpares.
*/

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}