#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    int i = 30;
    char nome[20] = "Rafa";
    float a = 1.74;
    int result;

    arq = fopen("ArqGrav.txt", "w");

    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        exit(1);
    }

    result = fprintf(arq, "Nome: %s\nIdade: %d\nAltura: %f\n", nome, i, a);

    if (result < 0)
        printf("Erro na escrita\n");

    exit(1);

    return 0;
}