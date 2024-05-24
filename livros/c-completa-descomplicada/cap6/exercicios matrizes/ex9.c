#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que permita ao usuário entrar com uma matriz de
tamanho 3 × 3 de números inteiros. Em seguida, calcule um vetor contendo
três posições, em que cada posição deverá armazenar a soma dos números
de cada coluna da matriz. Exiba na tela esse array.
*/

int main()
{
    int mat[3][3], res[3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o número: ");
            scanf("%d", &mat[i][j]);

            if (j == 0)
                res[0] += mat[i][j];
            if (j == 1)
                res[1] += mat[i][j];
            if (j == 2)
                res[2] += mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
        printf("%d ", res[i]);

    return 0;
}
