#include <stdio.h>
#include <stdlib.h>

/*
Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos
valores contidos em sua diagonal secundária.
*/

int main()
{
    int mat[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o número: ");
            scanf("%d", &mat[i][j]);
        }
    }
    int n = 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == (n - 1))
            {
                printf("Está na diagonal secundária: %d\n", mat[i][j]);
            }
        }
    }
    return 0;
}
