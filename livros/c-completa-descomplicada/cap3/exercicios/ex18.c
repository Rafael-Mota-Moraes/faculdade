#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que leia dois números inteiros e exiba o
deslocamento, à esquerda e à direita, do primeiro número pelo
segundo.
*/

int main()
{
    int n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    n3 = n1 << n2;
    printf("n3 = %d\n", n3);

    n3 = n1 >> n2;
    printf("n3 = %d\n", n3);

    return 0;
}