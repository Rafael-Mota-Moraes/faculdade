#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba um número inteiro maior do que 1 e
verifique se o número fornecido é primo ou não.
*/

int main()
{
    int num, is_primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 1)
    {
        printf("Numero menor que 1\n");
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_primo = 0;
        }
    }

    if (is_primo)
    {
        printf("Eh primo\n");
    }
    else
    {
        printf("Nao eh primo\n");
    }

    return 0;
}