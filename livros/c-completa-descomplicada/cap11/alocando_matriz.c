#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i, j, Nlinhas = 2, Ncolunas = 2;

    p = (int *)malloc(Ncolunas * Nlinhas * sizeof(int));

    for (i = 0; i < Nlinhas; i++)
    {
        for (j = 0; j < Ncolunas; j++)
            p[i * Ncolunas + j] = j + i;
    }

    for (i = 0; i < Nlinhas; i++)
    {
        for (j = 0; j < Ncolunas; j++)
            printf("%d ", p[i * Ncolunas + j]);
        printf("\n");
    }

    return 0;
}