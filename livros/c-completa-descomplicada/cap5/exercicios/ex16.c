#include <stdio.h>
#include <stdlib.h>

/*
Em matemática, o número harmônico designado por Hn
define-se como o enésimo termo da série harmônica.
Apresente um programa que calcule o valor de
qualquer Hn.
*/

int main()
{
    double num, soma = 1;
    printf("Digite um numero: ");
    scanf("%lf", &num);

    for (int i = 2; i <= (int)num; i++)
    {
        soma += (1 / (double)i);
    }
    printf("Hn: %lf\n", soma);

    return 0;
}