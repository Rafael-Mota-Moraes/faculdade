#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um valor em reais e a cotação do
dólar. Em seguida, imprima o valor correspondente em
dólares.
*/

int main()
{
    float valor_real, valor_dolar = 5.08;

    printf("Digite o valor em real: ");
    scanf("%f", &valor_real);

    valor_real = valor_real * valor_dolar;
    printf("Convertido: %.2f", valor_real);
    return 0;
}