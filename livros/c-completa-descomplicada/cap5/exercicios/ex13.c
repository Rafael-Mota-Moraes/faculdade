#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que exiba a soma de todos os números
naturais abaixo de 1.000 que são múltiplos de 3 ou 5.
*/

int main()
{
    for (int i = 0; i <= 1000; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d eh multiplo de 3.\n", i);
        }

        if (i % 5 == 0)
        {
            printf("%d eh multiplo de 5.\n", i);
        }
    }

    return 0;
}