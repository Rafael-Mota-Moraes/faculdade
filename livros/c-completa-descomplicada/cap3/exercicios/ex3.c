#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia três valores inteiros e mostre sua
soma.
*/

int main()
{
    int n1, n2, n3;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int soma = n1 + n2 + n3;
    printf("Soma dos numeros: %d", soma);

    return 0;
}