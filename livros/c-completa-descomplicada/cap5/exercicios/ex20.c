#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um valor inteiro e positivo N, calcule o mostre
o valor E.
*/

int main()
{
    double e = 1.0;
    int n, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fatorial = 1;
        for (int j = 1; j <= i; j++)
        {
            fatorial *= j;
        }

        e += (double)1 / fatorial;
    }

    printf("%lf\n", e);

    return 0;
}