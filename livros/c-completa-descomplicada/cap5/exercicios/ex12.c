#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro e calcule a
soma de todos os divisores desse número, com exceção dele
próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2
+ 3 + 6 + 11 + 22 + 33 = 78.
*/

int main()
{
    int n, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }

    printf("Soma dos divisores: %d\n", soma);
    return 0;
}