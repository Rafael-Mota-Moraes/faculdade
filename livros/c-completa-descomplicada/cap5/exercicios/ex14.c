#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro, maior ou
igual a zero, do usuário. Imprima o enésimo termo da
sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado
pela soma dos dois termos anteriores. Alguns termos dessa
sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/

int main()
{
    int n1 = 0, n2 = 1, n3;

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d %d ", n1, n2);
    for (int i = 2; i < n; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}