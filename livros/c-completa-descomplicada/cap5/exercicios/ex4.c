#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que determine e mostre os cinco primeiros
múltiplos de 3 considerando números maiores que 0.
*/

int main()
{
    int n = 1, contador = 0, num_multiplos = 0;

    while (num_multiplos < 5)
    {
        if (n % 3 == 0)
        {
            printf("%d eh divisivel por 3\n", n);
            num_multiplos++;
        }
        n++;
    }

    return 0;
}