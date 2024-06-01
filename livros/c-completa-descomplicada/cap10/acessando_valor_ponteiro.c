#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara uma variável int contendo o valor 10
    int count = 10;

    int *p;
    // Atribui ao ponteiro o endereço de uma variável int
    p = &count;
    printf("Conteudo apontado por p: %d \n", *p);

    // Atribui um novo valor à dispósição da memória apontada por p
    *p = 12;
    printf("Conteudo apontado por p: %d \n", *p);
    printf("Conteudo de count: %d \n", count);

    return 0;
}