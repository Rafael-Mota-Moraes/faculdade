#include <stdio.h>
#include <stdlib.h>

/*
Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela
quantos valores negativos ela possui.
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

    int qtd_negativos = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] < 0)
            {
                qtd_negativos++;
            }
        }
    }

    printf("A matriz tem %d números negativos.\n", qtd_negativos);

    return 0;
}
