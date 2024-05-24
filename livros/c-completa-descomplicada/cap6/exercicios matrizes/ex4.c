#include <stdio.h>
#include <stdlib.h>

/*
Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela
quantos valores maiores do que 10 ela possui.
*/

int main()
{
    int mat[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o número: ");
            scanf("%d", &mat[i][j]);
        }
    }

    int qtd_maiores_10 = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] >= 10)
            {
                qtd_maiores_10++;
            }
        }
    }

    printf("A matriz tem %d números maiores que 10.\n", qtd_maiores_10);

    return 0;
}
