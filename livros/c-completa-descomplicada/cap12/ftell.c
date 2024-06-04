#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    arq = fopen("arquivo.txt", "r");

    if (arq == NULL)
    {
        printf("Erro na abertura de arquivo\n");
        exit(1);
    }

    int tamanho;
    fseek(arq, 0, SEEK_END);
    tamanho = ftell(arq);
    fclose(arq);
    printf("Tamanho do arquivo em bytes: %d\n", tamanho);
    return 0;
}