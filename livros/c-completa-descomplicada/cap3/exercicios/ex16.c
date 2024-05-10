#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro e mostre a
multiplicação e a divisão desse número por dois (utilize os
operadores de deslocamento de bits).
*/

int main()
{
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    n2 = n1 << 1;
    printf("%d\n", n2);

    return 0;
}