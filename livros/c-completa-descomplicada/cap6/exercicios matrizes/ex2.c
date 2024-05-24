#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela
o maior valor contido nessa matriz e a sua localização (linha e coluna).
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

    int menor = mat[0][0];
    int loc_i, loc_j;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] < menor)
                menor = mat[i][j];
            loc_i = i;
            loc_j = j;
        }
    }

    printf("O menor número é: mat[%d][%d] = %d\n", loc_i, loc_j, menor);

    return 0;
}
