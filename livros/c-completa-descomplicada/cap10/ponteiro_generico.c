#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *pp;
    int *p1, p2 = 10;

    p1 = &p2;
    // recebe o endereço de um inteiro
    pp = &p2;
    printf("Endereco de pp: %p\n", pp);

    // recebe o endereço guardado em p1 (endereço de p2)
    pp = p1;

    printf("Endereco de pp: %p \n", pp);

    return 0;
}