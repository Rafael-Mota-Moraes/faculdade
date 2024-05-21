#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que faça a leitura de vários números
inteiros até que se digite um número negativo. O programa
tem de retornar o maior e o menor número lido.
*/

int main()
{
    int num = 0, maior = -1;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num >= maior)
        {
            printf("%d >= %d\n", num, maior);
            maior = num;
        }

    } while (num >= 0);

    printf("Maior numero: %d\n", maior);

    return 0;
}