#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba do usuário um vetor X com 10 posições. Em
seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/

int main()
{
    int v[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }

    int maior = v[0], menor = v[0];

    for (int i = 0; i < 10; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
        }

        if (v[i] > maior)
        {
            maior = v[i];
        }
    }

    printf("Menor número: %d\n", menor);
    printf("Maior número: %d\n", maior);

    return 0;
}
