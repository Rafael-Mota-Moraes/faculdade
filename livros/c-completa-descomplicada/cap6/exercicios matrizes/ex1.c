#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela
o menor valor contido nessa matriz.
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

    int menor = mat[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] < menor)
                menor = mat[i][j];
        }
    }

    printf("O menor número é: %d\n", menor);

    return 0;
}
