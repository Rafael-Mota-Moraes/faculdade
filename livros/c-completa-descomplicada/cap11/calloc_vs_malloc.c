#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Alocação com malloc
    int *p;
    p = (int *)malloc(50 * sizeof(int));

    if (p == NULL)
    {
        printf("Erro: Memoria insuficiente!\n");
    }

    // Alocação com calloc
    int *p1;
    p1 = (int *)calloc(50, sizeof(int));

    if (p1 == NULL)
    {
        printf("Erro: Memoria insuficiente!\n");
    }

    return 0;
}