#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    char *result;
    FILE *arq;
    arq = fopen("ArqGrav.txt", "r");
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        exit(1);
    }

    result = fgets(str, 13, arq);
    if (result == NULL)
        printf("Erro na leitura\n");
    else
        printf("%s", str);

    fclose(arq);
    return 0;
}