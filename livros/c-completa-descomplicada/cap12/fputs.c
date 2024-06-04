#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20] = "Hello World!";
    int result;
    FILE *arq;
    arq = fopen("ArqGrav.txt", "w");

    if (arq == NULL)
    {
        printf("Problemas na criacao do arquivo.\n");
        exit(1);
    }

    result = fputs(str, arq);
    if (result == EOF)
        printf("Erro na gravacao.\n");

    fclose(arq);
    return 0;
}