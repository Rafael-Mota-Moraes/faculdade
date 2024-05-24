#include <stdio.h>
#include <stdlib.h>

/*
Calcular e imprimir na tela uma matriz de tamanho 10 × 10
*/

int main()
{
    int mat[10][10];

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        {
            if (j < j)
            {
                mat[i][j] = 2 * i + 7 * j - 2;
            }
            else if (i == j)
            {
                mat[i][j] = 3 * (i * i);
            }
            else
            {
                mat[i][j] = 4 * (i * i * i) + 5 * (j * j) + 1;
            }
        }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("\t%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
