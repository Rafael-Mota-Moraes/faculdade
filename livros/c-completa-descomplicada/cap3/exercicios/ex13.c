#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Sejam a e b os catetos de um triângulo cuja hipotenusa h é
obtida pela equação:

Faça um programa que leia os valores de a e b, e
calcule o valor da hipotenusa através da
fórmula dada. Imprima o resultado.
*/

int main()
{
    float a, b;
    printf("Digite a e b: ");
    scanf("%f %f", &a, &b);

    float hipotenusa = sqrt((a * a) + (b * b));

    printf("Hipotenusa: %f", hipotenusa);

    return 0;
}