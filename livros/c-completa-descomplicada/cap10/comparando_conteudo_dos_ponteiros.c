#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *p1, x = 10, y = 20;

    p = &x;
    p1 = &y;

    if (*p > *p1)
        printf("O conteudo de p e maior que o conteudo de p1\n");
    else
        printf("O conteudo de p NAO eh maior que o conteudo de p1\n");
    return 0;
}