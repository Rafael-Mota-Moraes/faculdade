#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i;

    p = (int *)malloc(50 * sizeof(int));

    if (p == NULL)
    {
        printf("Erro: Memória insuficiente!\n");
        exit(1);
    }

    for (i = 0; i < 50; i++)
        p[i] = i + 1;

    for (i = 0; i < 50; i++)
        printf("%d\n", p[i]);

    free(p);
    return 0;
}