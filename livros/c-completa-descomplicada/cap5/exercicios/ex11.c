#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia um número positivo e imprima
seus divisores. Exemplo: Os divisores do número 66 são: 1, 2,
3, 6, 11, 22, 33 e 66.
*/

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d eh divisor de %d\n", i, n);
        }
    }

    return 0;
}