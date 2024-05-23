#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um vetor de 5 posições. Veriﬁque se existem
valores iguais e os escreva na tela.
*/

int main()
{
    int v[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v[i] == v[j] && j != i)
            {
                printf("%d está repetido.\n", v[j]);
            }
        }
    }

    return 0;
}
