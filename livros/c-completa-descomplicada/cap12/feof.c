#include <stdio.h>
#include <stdlib.h>

void salva()
{
    int v[5] = {1, 2, 3, 4, 5};
    int i;

    FILE *F;
    F = fopen("arq.txt", "w");

    if (F == NULL)
    {
        printf("Erro!\n");
        exit(1);
    }

    for (i = 0; i < 5; i++)
        fprintf(F, "%d\n", v[i]);

    fclose(F);
}

void carrega()
{
    int i, n;

    FILE *F;
    F = fopen("arq.txt", "r");

    if (F == NULL)
    {
        printf("Erro!\n");
        exit(1);
    }

    while (1)
    {
        fscanf(F, "%d", &n);
        if (feof(F))
            break;

        printf("%d\n", n);
    }
}

int main()
{
    salva();
    carrega();

    return 0;
}