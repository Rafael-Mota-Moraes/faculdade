#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que calcule e escreva o valor de S:
*/

int main()
{
    double s = 0;

    for (int cima = 1, baixo = 1; cima < 100; cima += 2, baixo++)
    {
        s += (double)cima / baixo;
    }

    printf("S = %lf\n", s);

    return 0;
}